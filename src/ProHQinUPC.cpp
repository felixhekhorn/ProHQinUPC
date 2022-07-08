#include "./ProHQinUPC.h"

#include <boost/filesystem.hpp>
#include <boost/format.hpp>

#include "./Integration.hpp"

using std::domain_error;

namespace ProHQinUPC {

/** @brief check hadronic S */
#define checkHadronicS(Sh)                                               \
  if (!std::isfinite(Sh) || Sh <= 4. * this->ker->m2)                    \
    throw domain_error(                                                  \
        "hadronic s has to be set, finite and strictly larger than the " \
        "threshold 4m^2!");

/** @brief check alphaEM */
#define checkAlphaEM(alphaEM) \
  if (!std::isfinite(alphaEM) || alphaEM <= 0.) throw domain_error("alpha_EM has to be finite and strict positive!");

ProHQinUPC::ProHQinUPC(cuint nlf, cdbl m2, cdbl xTilde, cdbl omega, cdbl deltax, cdbl deltay)
    : intOut(new IntegrationOutput()) {
  this->ker = new IntegrationKernel(nlf, m2);
  this->setXTilde(xTilde);
  this->setOmega(omega);
  this->setDeltax(deltax);
  this->setDeltay(deltay);

  this->intConfLO.calls = 30000;
  this->intConfLO.MC_warmupCalls = 3000;
}

ProHQinUPC::~ProHQinUPC() {
  if (0 != this->ker) delete this->ker;
  if (0 != this->intOut) delete this->intOut;
}

void ProHQinUPC::setXTilde(cdbl xTilde) const {
  if (xTilde <= 0. || xTilde >= 1.)
    throw domain_error((boost::format("xTilde (%e) has to be within (0,1)!") % xTilde).str());
  this->ker->xTilde = xTilde;
}

void ProHQinUPC::setOmega(cdbl omega) const {
  if (omega <= 0. || omega >= 2.)
    throw domain_error((boost::format("omega (%e) has to be within (0,2)!") % omega).str());
  if (this->ker->deltay >= omega)
    throw domain_error(
        (boost::format("omega (%e) has to be bigger than deltay (%e)!") % omega % (this->ker->deltay)).str());
  this->ker->omega = omega;
}

void ProHQinUPC::setDeltax(cdbl deltax) const {
  if (deltax <= 0 || deltax >= 1)
    throw domain_error((boost::format("deltax (%e) has to be positive and smaller then 1!") % deltax).str());
  this->ker->deltax = deltax;
}

void ProHQinUPC::setDeltay(cdbl deltay) const {
  if (deltay <= 0 || deltay >= 2 || deltay >= this->ker->omega)
    throw domain_error((boost::format("deltay (%e) has to be positive, smaller "
                                      "then 2 and smaller than omega (%e)!") %
                        deltay % (this->ker->omega))
                           .str());
  this->ker->deltay = deltay;
}

void ProHQinUPC::setHadronicS(cdbl Sh) const { checkHadronicS(Sh) this->ker->Sh = Sh; }

void ProHQinUPC::setAlphaEM(cdbl alphaEM) const { checkAlphaEM(alphaEM) this->ker->alphaEM = alphaEM; }

void ProHQinUPC::setPdf(const str &name, const int member) const {
  // delete old
  if (0 != this->ker->pdf) delete (this->ker->pdf);
  if (0 != this->ker->aS) delete (this->ker->aS);
  // allocate new
  this->ker->pdf = LHAPDF::mkPDF(name, member);
  this->ker->aS = LHAPDF::mkAlphaS(name, member);
}

cdbl ProHQinUPC::sigma() const {
  checkHadronicS(this->ker->Sh) checkAlphaEM(this->ker->alphaEM)

      // check others explicitly
      if (0 == this->ker->pdf) throw domain_error("we need a PDF!");
  if (0 == this->ker->aS) throw domain_error("we need a alpha_s prescription!");
  // prepare histograms
  this->setupHistograms();
  // compute
  dbl res = dblNaN;
  if (this->flags().useLeadingOrder) res = integrate(this->ker, 2, this->intConfLO, this->intOut);

  // write histograms
  for (histMapT::const_iterator it = this->ker->histMap.cbegin(); it != this->ker->histMap.cend(); ++it)
    it->second->writeToFile();
  return res;
}

void ProHQinUPC::activateHistogram(const histT t, cuint size, const str &path, cdbl min, cdbl max, const bool useLog) {
  // assert existance of path
  boost::filesystem::path fp(path);
  boost::filesystem::path par = fp.parent_path();
  if (par.string().size() > 0 && !boost::filesystem::exists(par))
    throw std::ios::failure("histogram path \"" + par.string() + "\" does not exist!");
  // create
  gslpp::Histogram *h = new gslpp::Histogram(size);
  if (!std::isnan(min) && !std::isnan(max)) {
    if (useLog)
      h->setRangesUniform(min, max);
    else
      h->setRangesLog10(min, max);
  }

  h->setPath(path);
  // insert
  this->ker->histMap.insert({t, h});
}

void ProHQinUPC::setupHistograms() const {
  for (histMapT::const_iterator it = this->ker->histMap.cbegin(); it != this->ker->histMap.cend(); ++it) {
    if (it->second->isInitialized()) continue;
    switch (it->first) {
      case histT::HAQRapidity: {
        cdbl y0 = this->ker->getHAQRapidityMax();
        it->second->setRangesUniform(-y0, y0);
      } break;
      case histT::HAQTransverseMomentum:
        it->second->setRangesUniform(0., this->ker->getHAQTransverseMomentumMax());
        break;
      case histT::HAQTransverseMomentumScaling:
        it->second->setRangesLog10(1.e-3, 1.);
        break;
      case histT::HAQFeynmanX:
        it->second->setRangesUniform(-1., 1. + 1e-5);
        break;

      default:
        continue;
    }
  }
}

}  // namespace ProHQinUPC
