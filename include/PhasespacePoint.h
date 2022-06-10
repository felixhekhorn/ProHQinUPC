#ifndef PROHQINUPC_INCLUDE_PHASESPACEPOINT_H_
#define PROHQINUPC_INCLUDE_PHASESPACEPOINT_H_

// #include <rk/rk.hh>

#include "./KinematicVars.hpp"
#include "./config.h"

namespace ProHQinUPC {

/**
 * @brief represents a single point in phase space
 */
class PhasespacePoint {
  /**
   * @brief heavy quark mass squared \f$m^2 > 0\f$
   */
  cdbl m2;

  /**
   * @brief hadronic center-of-mass energy
   */
  cdbl Sh;

  /**
   * @brief current z
   */
  dbl z = -0.;

  /**
   * @brief current s
   */
  dbl s = -0.;

  /**
   * @bried order
   */
  uint order = 0;

  /**
   * @brief current Theta1
   */
  dbl Theta1 = -0.;

  /**
   * @brief current x
   */
  dbl x = 1.;

  /**
   * @brief current y
   */
  dbl y = -1.;

  /**
   * @brief current Theta2
   */
  dbl Theta2 = -0.;

  /**
   * @brief incoming parton
   */
  //    rk::P4 k1;

  /**
   * @brief incoming photon
   */
  //    rk::P4 q;

  /**
   * @brief outgoing heavy quark
   */
  //    rk::P4 p1;

  /**
   * @brief outgoing heavy anti quark
   */
  //    rk::P4 p2;

  /**
   * @brief shifts all vectors to the final (observatory-) frame
   */
  void applyLTsToFinalFrame();

 public:
  /**
   * @brief contstructor
   * @param m2 heavy quark mass squared \f$m^2 > 0\f$
   * @param Sh hadronic center-of-mass energy \f$S_h=(k_1 + P)^2\f$
   */
  PhasespacePoint(cdbl m2, cdbl Sh);

  /**
   * @brief sets a LO phase space point
   * @param z actual z
   * @param Theta1 actual Theta1
   */
  void setupLO(cdbl z, cdbl Theta1);

  /**
   * @brief sets a LO phase space point
   * @param z actual z
   * @param x actual x
   * @param y actual y
   * @param Theta1 actual Theta1
   * @param Theta2 actual Theta2
   */
  void setupNLO(cdbl z, cdbl x, cdbl y, cdbl Theta1, cdbl Theta2);

  /**
   * @brief current z
   * @return z
   */
  cdbl getZ() const;

  /**
   * @brief momentum of outgoing heavy quark
   * @return p1
   */
  //    const rk::P4 getP1() const;

  /**
   * @brief momentum of outgoing heavy anti quark
   * @return p2
   */
  //    const rk::P4 getP2() const;

  /**
   * @brief current hadronic S
   * @return \f$S_h\f$
   */
  cdbl getSh() const;

  /**
   * @brief current Theta1
   * @return Theta1
   */
  cdbl getTheta1() const;

  /**
   * @brief is NLO point?
   * @return is NLO?
   */
  const bool isNLO() const;

  /**
   * @brief current x if is NLO
   * @return x
   */
  cdbl getX() const;

  /**
   * @brief current y if is NLO
   * @return y
   */
  cdbl getY() const;

  /**
   * @brief current Theta2 if is NLO
   * @return Theta2
   */
  cdbl getTheta2() const;
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_PHASESPACEPOINT_H_
