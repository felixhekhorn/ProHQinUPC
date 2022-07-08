#ifndef PROHQINUPC_INCLUDE_INTEGRATIONKERNEL_H_
#define PROHQINUPC_INCLUDE_INTEGRATIONKERNEL_H_

#include <LHAPDF/LHAPDF.h>
#include <dvegas/dvegas.h>

#include "./Flags.hpp"
#include "./PhasespacePoint.h"
#include "./config.h"
#include "./histT.hpp"

namespace ProHQinUPC {

/**
 * @brief Integration kernel evaluated under the integral
 */
class IntegrationKernel : public HepSource::Integrand {
  /** @name private integration variables */
  ///@{
  /** @brief Theta1 */
  dbl Theta1 = dblNaN;

  /** @brief jacobian=volume for Theta1 trafo */
  cdbl V_Theta1 = M_PI;

  /** @brief z */
  dbl z = dblNaN;

  /** @brief volume for z trafo */
  dbl V_z = 0.;

  /** @brief partonic s */
  dbl s = dblNaN;
  ///@}

  /** @name integration variable transformations */
  ///@{
  /**
   * @brief sets Theta1
   * @param a integration variable
   */
  void setTheta1(cdbl a);

  /**
   * @brief sets z
   * @param a integration variable
   */
  void setZ(cdbl a);

  /**
   * @brief compute lower integration bound for z
   * @returns lower integration bound for z \f$z_{min} = (4m^2)/S_h\f$
   */
  cdbl getZmin() const;
  ///@}

  /**
   * @brief compute LO contributions
   * @return \f$\sigma_{LO}\f$
   */
  cdbl getLO() const;

  /** @name historgram tools and methods */
  ///@{
  /** @brief integration weight determined by VEGAS */
  cdbl* vegasWeight = 0;

  /**
   * @brief scales all avtive histograms
   * @param s factor
   */
  void scaleHistograms(cdbl s) const;

  /**
   * @brief fills all avtive histograms
   * These histograms may only depend on LO variables such as p1, p2, k1, q
   * @param p current phase space point
   * @param i integrand
   */
  void fillHistograms(const PhasespacePoint& p, cdbl i) const;
  ///@}

 public:
  /**
   * @brief constructor
   * @param nlf number of light flavours
   * @param m2 mass^2 of heavy flavours
   */
  IntegrationKernel(cuint nlf, cdbl m2);

  /** @brief destructor */
  ~IntegrationKernel();

  /** @name common variables */
  ///@{
  /** @brief number of light flavors */
  cuint nlf;

  /** @brief heavy quark mass */
  cdbl m2;

  /** @brief controlling flags */
  Flags flags;
  ///@}

  /** @name public integration variables */
  ///@{

  /** @brief factor to soft regulation parameter \f$\tilde\rho = 1-\tilde
   * x(1-\rho^*) \f$ */
  dbl xTilde = dblNaN;

  /** @brief collinear regulation parameter \f$\omega\f$ */
  dbl omega = dblNaN;

  /** @brief offset to upper integration bound in x \f$\delta_x \f$ */
  dbl deltax = 0.;

  /** @brief offset to lower integration bound in y \f$\delta_y \f$ */
  dbl deltay = 0.;
  ///@}

  /** @name hadronic variables */
  ///@{

  /** @brief electro-magnetic coupling constant - defaults to PDG value */
  dbl alphaEM = 1. / 137.0359991;

  /** @brief hadronic center-of-mass energy \f$S_h=(p+q)^2\f$ */
  dbl Sh = dblNaN;

  /** @brief used pdfs */
  LHAPDF::PDF* pdf = 0;

  /** @brief running strong coupling as provided by LHAPDF */
  LHAPDF::AlphaS* aS = 0;

  /** @brief pointer to map of histograms */
  histMapT histMap;

  /**
   * @brief get maximum value of pt of heavy anti quark
   * @return pt_Qbar^max
   */
  inline cdbl getHAQTransverseMomentumMax() const { return sqrt(this->Sh / 4. - this->m2); }

  /**
   * @brief get maximum value of rapidity of heavy anti quark
   * @return y_Qbar^max
   */
  inline cdbl getHAQRapidityMax() const { return atanh(sqrt(1. - 4. * this->m2 / this->Sh)); }
  ///@}

  /**
   * @brief called function in Dvegas kernel
   * @param x adapted continuous integration variables
   * @param k discrete integration variables
   * @param weight integration weight
   * @param aux unadapted continuous integration variables
   * @param f output
   */
  void operator()(const double x[], const int k[], const double& weight, const double aux[], double f[]);

  /** @see HepSource::Integrand::Dvegas_init */
  void Dvegas_init() const;

  /** @see HepSource::Integrand::Dvegas_final */
  void Dvegas_final(cuint iterations) const;
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_INTEGRATIONKERNEL_H_
