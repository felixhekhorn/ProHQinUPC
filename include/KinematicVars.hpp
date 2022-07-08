#ifndef PROHQINUPC_INCLUDE_KINEMATICVARS_HPP_
#define PROHQINUPC_INCLUDE_KINEMATICVARS_HPP_

#include <algorithm>

#include "./config.h"

namespace ProHQinUPC {

/** @brief forces x to be min <= x <= max  */
#define mima(x, mi, ma) min(max(x, mi), ma)

/**
 * @class KinematicVars
 * @brief computes all 2-to-3-particle phasespace variables
 */
struct KinematicVars {
  /** @name momentum variables computed in the cms of the heavy quark pair and q
   * || z */
  ///@{
  dbl q0, k10, cosPsi, sinPsi, beta5;
  ///@}

  /** @name mandelstam variables (Lorentz invariants) */
  ///@{
  dbl s5, tp, up, t1, u1;
  ///@}

  /**
   * @brief constructor
   * @param m2 heavy quark mass
   * @param s center of mass energy
   * @param x soft integration variable
   * @param y collinear integration variable
   * @param Theta1 first angular variable
   * @param Theta2 second angular variable
   */
  KinematicVars(cdbl m2, cdbl s, cdbl x, cdbl y, cdbl Theta1, cdbl Theta2) {
    if (!std::isfinite(m2) || m2 <= 0.) throw std::domain_error("m2 has to be strictly positive!");
    using std::cos;
    using std::max;
    using std::min;
    using std::sin;
    this->s5 = max(s * x, 4. * m2);
    this->tp = -1. / 2. * s * (1. - x) * (1. + y);
    this->up = -1. / 2. * s * (1. - x) * (1. - y);

    cdbl Sqrts5 = sqrt(s5);
    this->q0 = (s + up) / (2. * Sqrts5);
    this->k10 = (s5 - up) / (2. * Sqrts5);
    this->cosPsi = mima((-s + 2. * k10 * q0) / (2. * k10 * q0), -1., 1.);
    this->sinPsi = sqrt(1. - cosPsi * cosPsi);
    this->beta5 = sqrt(1. - 4. * m2 / s5);

    this->t1 = -1. / 2. * (s5 - up) * (1. + beta5 * cos(Theta2) * sin(Theta1) * sinPsi + beta5 * cos(Theta1) * cosPsi);
    this->u1 = -1. / 2. * (s + up + 2. * Sqrts5 * beta5 * q0 * cos(Theta1));
  }
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_KINEMATICVARS_HPP_
