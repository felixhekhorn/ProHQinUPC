#include "./ProHQinUPC.h"

#include <boost/format.hpp>

#include "./Integration.hpp"

using std::domain_error;

namespace ProHQinUPC {

ProHQinUPC::ProHQinUPC(cuint nlf, cdbl m2, cdbl xTilde, cdbl omega, cdbl deltax,
                       cdbl deltay)
    : intOut(new IntegrationOutput()) {
  this->ker = new IntegrationKernel(nlf, m2);
  this->setXTilde(xTilde);
  this->setOmega(omega);
  this->setDeltax(deltax);
  this->setDeltay(deltay);

  this->intConf.calls = 100;
  this->intConf.MC_warmupCalls = 100;
}

ProHQinUPC::~ProHQinUPC() {
  if (0 != this->ker) delete this->ker;
  if (0 != this->intOut) delete this->intOut;
}

void ProHQinUPC::setXTilde(cdbl xTilde) {
  if (xTilde <= 0. || xTilde >= 1.)
    throw domain_error(
        (boost::format("xTilde (%e) has to be within (0,1)!") % xTilde).str());
  this->ker->xTilde = xTilde;
}

void ProHQinUPC::setOmega(cdbl omega) {
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

void ProHQinUPC::setDeltax(cdbl deltax) {
  if (deltax <= 0 || deltax >= 1)
    throw domain_error(
        (boost::format("deltax (%e) has to be positive and smaller then 1!") %
         deltax)
            .str());
  this->ker->deltax = deltax;
}

void ProHQinUPC::setDeltay(cdbl deltay) {
  if (deltay <= 0 || deltay >= 2 || deltay >= this->ker->omega)
    throw domain_error((boost::format("deltay (%e) has to be positive, smaller "
                                      "than 2 and smaller than omega (%e)!") %
                        deltay % (this->ker->omega))
                           .str());
  this->ker->deltay = deltay;
}

cdbl ProHQinUPC::sigma() const {
  return integrate(this->ker, 1, this->intConf, this->intOut);
}

}  // namespace ProHQinUPC
