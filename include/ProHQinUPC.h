#ifndef PROHQINUPC_INCLUDE_PROHQINUPC_H_
#define PROHQINUPC_INCLUDE_PROHQINUPC_H_

#include "./IntegrationKernel.h"
#include "./IntegrationMeta.hpp"
#include "./config.h"

namespace ProHQinUPC {

class ProHQinUPC {
  /** @brief integration kernel */
  IntegrationKernel* ker;

  /** @brief current (last) IntegrationOutput */
  IntegrationConfig intConf;

  /** @brief current (last) IntegrationOutput */
  IntegrationOutput* intOut;

 public:
  /**
   * @brief constructor
   * @param nlf number of light flavours
   * @param m2 mass^2 of heavy flavours
   * @param xTilde factor to soft regulation parameter \f$\tilde\rho = 1-\tilde
   * x(1-\rho^*) \f$
   * @param omega collinear regulation parameter \f$\omega\f$
   * @param deltax offset to upper integration bound in x \f$\delta_x \f$
   * @param deltay offset to lower integration bound in y \f$\delta_y \f$
   */
  ProHQinUPC(cuint nlf, cdbl m2, cdbl xTilde, cdbl omega, cdbl deltax,
             cdbl deltay);

  /** @brief destructor */
  ~ProHQinUPC();

  /** @name global getter and setter */
  ///@{

  /**
   * @brief sets xTilde
   * @param xTilde factor to soft regulation parameter \f$\tilde\rho = 1-\tilde
   * x(1-\rho^*)\f$
   */
  void setXTilde(cdbl xTilde);

  /**
   * @brief sets omega
   * @param omega collinear regulation parameter \f$\omega\f$
   */
  void setOmega(cdbl omega);

  /**
   * @brief sets deltax
   * @param deltax upper integration bound in x
   */
  void setDeltax(cdbl deltax);

  /**
   * @brief sets deltay
   * @param deltay lower integration bound in y
   */
  void setDeltay(cdbl deltay);

  ///@}

  /** @brief compute cross section */
  cdbl sigma() const;
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_PROHQINUPC_H_
