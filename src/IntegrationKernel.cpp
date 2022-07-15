#include "./Consts.hpp"
#include "./KinematicVars.hpp"
#include "./ME.h"
#include "./PhasespacePoint.h"
#include "./ProHQinUPC.h"

using std::domain_error;

namespace ProHQinUPC {

IntegrationKernel::IntegrationKernel(cuint nlf, cdbl m2)
    : nlf(nlf), m2(m2), flags(true, true, true, true, true, true, true) {}

IntegrationKernel::~IntegrationKernel() {
  if (0 != this->pdf) delete this->pdf;
  if (0 != this->aS) delete this->aS;
  // delete all histograms
  for (histMapT::const_iterator it = this->histMap.cbegin(); it != this->histMap.cend(); ++it) {
    delete (it->second);
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

cdbl IntegrationKernel::getLO() const {
  // LO is the soft limit (x=1) of NLO kinematics
  KinematicVars kin(this->m2, this->s, 1., 0., this->Theta1, 0.);
  /// \todo What to use as renomalization and factorization scale?
  /// Glück+Reya \cite Gluck:1988uj seem to use partonic s, but Wilco seemed to
  /// use mc^2
  cdbl alphaS = this->aS->alphasQ2(this->s);
  // global coefficient function normalization
  cdbl eQ = electricCharge(this->nlf + 1);
  cdbl nLO = alphaS * this->alphaEM * eQ * eQ / this->m2;
  // collect PDF and related integration
  cdbl nLOg = this->V_z * 1. / this->z * this->pdf->xfxQ2(21, this->z, this->s);
  // matrix element normalization and phase space
  cdbl n = 8. * M_PI * Color::Kgph * cdbl(Color::NC) * Color::CF * 1. / (4. * this->s) * this->m2 * kin.beta5 *
           sin(this->Theta1) * this->V_Theta1;
  // Compute matrix element
  cdbl me = ME::BQED(this->m2, this->s, kin.t1);
  // join everything
  return nLO * nLOg * n * me;
}

void IntegrationKernel::operator()(const double x[], const int k[], const double &weight, const double aux[],
                                   double f[]) {
  this->vegasWeight = &weight;
  dbl res = 0.;
  // LO variables are always there
  this->setZ(x[0]);
  this->setTheta1(x[1]);
  // compute LO
  if (this->flags.useLeadingOrder && this->flags.useGluonicChannel) {
    PhasespacePoint p(this->m2, this->Sh);
    p.setupLO(this->z, this->Theta1);
    cdbl sigmaLO = this->getLO();
    this->fillHistograms(p, sigmaLO);
    res += sigmaLO;
  }
  f[0] = res;
}

void IntegrationKernel::scaleHistograms(cdbl s) const {
  for (histMapT::const_iterator it = this->histMap.cbegin(); it != this->histMap.cend(); ++it) it->second->scale(s);
}

void IntegrationKernel::fillHistograms(const PhasespacePoint &p, cdbl i) const {
  // something active?
  if (this->histMap.empty()) return;
  if (0 == this->vegasWeight) return;
  cdbl value = i * (*this->vegasWeight);
  if (!std::isfinite(value) || 0. == value) return;
  // iterate
  for (histMapT::const_iterator it = this->histMap.cbegin(); it != this->histMap.cend(); ++it) {
    dbl var = dblNaN;
    switch (it->first) {
      case histT::HAQRapidity:
        var = p.getP2().rapidity();
        break;
      case histT::HAQTransverseMomentum:
        var = p.getP2().pt();
        break;
      case histT::HAQTransverseMomentumScaling: {
        cdbl ptmax = this->getHAQTransverseMomentumMax();
        var = p.getP2().pt() / ptmax;
      } break;
      case histT::HAQFeynmanX: {
        // all transverse or all longitudinal is just the same
        cdbl plmax = this->getHAQTransverseMomentumMax();
        var = p.getP2().pz() / plmax;
      } break;
      default:
        continue;
    }
    it->second->accumulate(var, value);
  }
}

void IntegrationKernel::Dvegas_init() const { this->scaleHistograms(0.); }

void IntegrationKernel::Dvegas_final(cuint iterations) const { this->scaleHistograms(1. / cdbl(iterations)); }

}  // namespace ProHQinUPC
