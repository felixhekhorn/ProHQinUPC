#include <boost/format.hpp>

#include "./Color.hpp"
#include "./KinematicVars.hpp"
#include "./ME.h"
#include "./PhasespacePoint.h"
#include "./ProHQinUPC.h"

using std::domain_error;

namespace ProHQinUPC {

IntegrationKernel::IntegrationKernel(cuint nlf, cdbl m2) : nlf(nlf), m2(m2) {}

IntegrationKernel::~IntegrationKernel() {
  if (0 != this->pdf) delete this->pdf;
  if (0 != this->aS) delete this->aS;
}

cdbl IntegrationKernel::getElectricCharge(cint PDGId) const {
  // see
  // https://en.wikipedia.org/wiki/Mathematical_formulation_of_the_Standard_Model
  // + Leader + PDG
  switch (PDGId) {
    case 11:
    case -11:
      return -1.;  // e
    case 1:
    case -1:
    case 3:
    case -3:
    case 5:
    case -5:
      return -1. / 3.;  // d,s,b
    case 2:
    case -2:
    case 4:
    case -4:
    case 6:
    case -6:
      return 2. / 3.;  // u,c,t
    case 21:
      return 0.;  // g
    default:
      throw domain_error(
          (boost::format("unkown particle id: %d") % PDGId).str());
  }
}

void IntegrationKernel::setTheta1(cdbl a) { this->Theta1 = this->V_Theta1 * a; }

cdbl IntegrationKernel::getZmin() const { return (4. * this->m2) / this->Sh; }

void IntegrationKernel::setZ(cdbl a) {
  cdbl zMin = this->getZmin();
  this->V_z = 1. - zMin;
  this->z = zMin + this->V_z * a;
  this->s = this->z * this->Sh;
}

void IntegrationKernel::operator()(const double x[], const int k[],
                                   const double& weight, const double aux[],
                                   double f[]) {
  // start with LO
  this->setZ(x[0]);
  this->setTheta1(x[1]);
  // setup vectors
  PhasespacePoint p(this->m2, this->Sh);
  p.setupLO(this->z, this->Theta1);
  // LO is the soft limit (x=1) of NLO kinematics
  KinematicVars kin(this->m2, this->s, 1., 0., this->Theta1, 0.);
  /// \todo What to use as renomalization and factorization scale?
  /// Glück+Reya \cite Gluck:1988uj seem to use partonic s, but Wilco seemed to
  /// use mc^2
  cdbl alphaS = this->aS->alphasQ2(this->s);
  // global coefficient function normalization
  cdbl eQ = this->getElectricCharge(this->nlf + 1);
  cdbl nLO = alphaS * this->alphaEM * eQ * eQ / this->m2;
  // collect PDF and related integration
  cdbl nLOg = this->V_z * 1. / this->z * this->pdf->xfxQ2(21, this->z, this->s);
  // matrix element normalization and phase space
  cdbl n = 8. * M_PI * Color::Kgph * cdbl(Color::NC) * Color::CF * 1. /
           (4. * this->s) * this->m2 * kin.beta5 * sin(this->Theta1) *
           this->V_Theta1;
  // Compute matrix element
  cdbl me = ME::BQED(this->m2, this->s, kin.t1);
  // join everything
  f[0] = nLO * nLOg * n * me;
}

void IntegrationKernel::Dvegas_init() const {}

void IntegrationKernel::Dvegas_final(cuint iterations) const {}

}  // namespace ProHQinUPC
