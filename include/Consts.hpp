/**
 * @file Consts.hpp
 * @brief defines constants
 */

#ifndef PROHQINUPC_INCLUDE_CONSTS_HPP_
#define PROHQINUPC_INCLUDE_CONSTS_HPP_

#include <boost/format.hpp>

#include "./config.h"

/** @brief [debug] flag to unset QED-like contributions */
#define _fQED 1.

namespace ProHQinUPC {

/** @brief constants related to color space */
namespace Color {

/** @brief number of Colors \f$N_C \f$ */
cuint NC = 3;

/** @brief Casimir constant of fundamental representation \f$C_F=\frac{N_C^2 -
 * 1}{2N_C} \f$ */
cdbl CF = cdbl(NC * NC - 1) / cdbl(2 * NC);

/** @brief Casimir constant of adjoint representation \f$C_A=N_C \f$ */
cdbl CA = cdbl(NC);

/** @brief Color avarage of \f$\Pg\f$ and \f$\Pgg\f$ in initial state
 * \f$K_{\Pg\Pgg} = \frac 1 {N_C^2 -1} \f$ */
cdbl Kgph = 1. / (cdbl(NC * NC - 1));

/** @brief Color avarage of \f$\Pq\f$ and \f$\Pgg\f$ in initial state
 * \f$K_{\Pq\Pgg} = \frac 1 {N_C} \f$ */
cdbl Kqph = 1. / (cdbl(NC));

}  // namespace Color

/**
 * @brief returns electric charge of a particle
 * @param PDGId PDG particle id
 * @return electric charge
 */
inline cdbl electricCharge(cint PDGId) {
  // see
  // https://en.wikipedia.org/wiki/Mathematical_formulation_of_the_Standard_Model
  // + Leader + PDG
  switch (PDGId) {
    case 11:
      return -1.;  // e
    case -11:
      return 1.;  // p
    case 1:
    case 3:
    case 5:
      return -1. / 3.;  // d,s,b
    case -1:
    case -3:
    case -5:
      return 1. / 3.;  // dbar,sbar,bbar
    case 2:
    case 4:
    case 6:
      return 2. / 3.;  // u,c,t
    case -2:
    case -4:
    case -6:
      return -2. / 3.;  // ubar,cbar,tbar
    case 21:
      return 0.;  // g
    default:
      throw std::domain_error((boost::format("unkown particle id: %d") % PDGId).str());
  }
}

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_CONSTS_HPP_
