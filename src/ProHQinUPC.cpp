#include "./ProHQinUPC.h"

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
#define checkAlphaEM(alphaEM)                   \
  if (!std::isfinite(alphaEM) || alphaEM <= 0.) \
    throw domain_error("alpha_EM has to be finite and strict positive!");

ProHQinUPC::ProHQinUPC(cuint nlf, cdbl m2, cdbl xTilde, cdbl omega, cdbl deltax,
                       cdbl deltay)
    : intOut(new IntegrationOutput()) {
  this->ker = new IntegrationKernel(nlf, m2);
  this->setXTilde(xTilde);
  this->setOmega(omega);
  this->setDeltax(deltax);
  this->setDeltay(deltay);

  this->intConfLO.calls = 100;
  this->intConfLO.MC_warmupCalls = 100;
}

ProHQinUPC::~ProHQinUPC() {
  if (0 != this->ker) delete this->ker;
  if (0 != this->intOut) delete this->intOut;
}

void ProHQinUPC::setXTilde(cdbl xTilde) const {
  if (xTilde <= 0. || xTilde >= 1.)
    throw domain_error(
        (boost::format("xTilde (%e) has to be within (0,1)!") % xTilde).str());
  this->ker->xTilde = xTilde;
}

void ProHQinUPC::setOmega(cdbl omega) const {
  if (omega <= 0. || omega >= 2.)
    throw domain_error(
        (boost::format("omega (%e) has to be within (0,2)!") % omega).str());
  if (this->ker->deltay >= omega)
    throw domain_error(
        (boost::format("omega (%e) has to be bigger than deltay (%e)!") %
         omega % (this->ker->deltay))
            .str());
  this->ker->omega = omega;
}

void ProHQinUPC::setDeltax(cdbl deltax) const {
  if (deltax <= 0 || deltax >= 1)
    throw domain_error(
        (boost::format("deltax (%e) has to be positive and smaller then 1!") %
         deltax)
            .str());
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

void ProHQinUPC::setHadronicS(cdbl Sh) const {
  checkHadronicS(Sh) this->ker->Sh = Sh;
}

void ProHQinUPC::setAlphaEM(cdbl alphaEM) const {
  checkAlphaEM(alphaEM) this->ker->alphaEM = alphaEM;
}

void ProHQinUPC::setPdf(const str& name, const int member) const {
  // delete old
  if (0 != this->ker->pdf) delete (this->ker->pdf);
  if (0 != this->ker->aS) delete (this->ker->aS);
  // allocate new
  this->ker->pdf = LHAPDF::mkPDF(name, member);
  this->ker->aS = LHAPDF::mkAlphaS(name, member);
}

cdbl ProHQinUPC::sigma() const {
  checkHadronicS(this->ker->Sh) checkAlphaEM(this->ker->alphaEM)

      if (0 == this->ker->pdf) throw domain_error("we need a PDF!");
  if (0 == this->ker->aS) throw domain_error("we need a alpha_s prescription!");
  return integrate(this->ker, 2, this->intConfLO, this->intOut);
}

}  // namespace ProHQinUPC
