#ifndef PROHQINUPC_INCLUDE_INTEGRATIONKERNEL_H_
#define PROHQINUPC_INCLUDE_INTEGRATIONKERNEL_H_

#include <dvegas/dvegas.h>

#include "./config.h"

namespace ProHQinUPC {

/**
 * @brief Integration kernel evaluated under the integral
 */
class IntegrationKernel : public HepSource::Integrand {
  /** @brief number of light flavors */
  cuint nlf;

  /** @brief heavy quark mass */
  cdbl m2;

 public:
  /**
   * @brief constructor
   * @param nlf number of light flavours
   * @param m2 mass^2 of heavy flavours
   */
  IntegrationKernel(cuint nlf, cdbl m2);

  /** @brief factor to soft regulation parameter \f$\tilde\rho = 1-\tilde
   * x(1-\rho^*) \f$ */
  dbl xTilde = dblNaN;

  /** @brief collinear regulation parameter \f$\omega\f$ */
  dbl omega = dblNaN;

  /** @brief offset to upper integration bound in x \f$\delta_x \f$ */
  dbl deltax = 0.;

  /** @brief offset to lower integration bound in y \f$\delta_y \f$ */
  dbl deltay = 0.;

  /**
   * @brief called function in Dvegas kernel
   * @param x adapted continuous integration variables
   * @param k discrete integration variables
   * @param weight integration weight
   * @param aux unadapted continuous integration variables
   * @param f output
   */
  void operator()(const double x[], const int k[], const double& weight,
                  const double aux[], double f[]);

  /**
   * @see HepSource::Integrand::Dvegas_init
   */
  void Dvegas_init() const;

  /**
   * @see HepSource::Integrand::Dvegas_final
   */
  void Dvegas_final(cuint iterations) const;
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_INTEGRATIONKERNEL_H_
