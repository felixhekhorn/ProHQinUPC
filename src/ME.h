#include "../include/config.h"

#ifndef PROHQINUPC_SRC_ME_H_
#define PROHQINUPC_SRC_ME_H_

namespace ProHQinUPC {

/** @brief Holds all matrix elements as functions of the Mandelstam variables */
namespace ME {

// cast MMa as macro
#define Power(x, y) pow(x, y)
#define Cos(x) cos(x)
#define Sin(x) sin(x)
#define Sqrt(x) sqrt(x)

// Mandelstam remapping
#define DEF_s3 cdbl s3 = -s - t1 - tp - u1 - up;
#define DEF_s4 cdbl s4 = s + t1 + u1;
#define DEF_s5 cdbl s5 = s + tp + up;
#define DEF_u1 cdbl u1 = -s - t1;
#define DEF_u6 cdbl u6 = -s - t1 - tp;
#define DEF_u7 cdbl u7 = -s - u1 - up;

/**
 * @brief LO photon-gluon matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam for scattering angle
 */
cdbl BQED(cdbl m2, cdbl s, cdbl t1);

/**
 * @brief NLO photon-glon matrix element proportional CA
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam t1
 * @param u1 Mandelstam u1
 * @param tp Mandelstam tp
 * @param up Mandelstam up
 */
cdbl ROK(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up);

/**
 * @brief x-1,y->-1 counter term for NLO photon-glon matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam t1
 */
cdbl RCounterXYm(cdbl m2, cdbl s, cdbl t1);

/**
 * @brief y->-1 counter term for NLO photon-glon matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param x soft fraction
 * @param Theta1 first angle
 * @param Theta2 second angle
 */
cdbl RCounterYm(cdbl m2, cdbl s, cdbl x, cdbl Theta1, cdbl Theta2);

/**
 * @brief x->1 counter term for NLO photon-glon matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param y collinear fraction
 * @param Theta1 first angle
 * @param Theta2 second angle
 */
cdbl RCounterYm(cdbl m2, cdbl s, cdbl y, cdbl Theta1, cdbl Theta2);

/**
 * @brief NLO photon-glon matrix element proportional 2*CF
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam t1
 * @param u1 Mandelstam u1
 * @param tp Mandelstam tp
 * @param up Mandelstam up
 */
cdbl RQED(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up);

/**
 * @brief NLO photon-singlet matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam t1
 * @param u1 Mandelstam u1
 * @param tp Mandelstam tp
 * @param up Mandelstam up
 */
cdbl A1(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up);

/**
 * @brief NLO photon-non-singlet matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam t1
 * @param u1 Mandelstam u1
 * @param tp Mandelstam tp
 * @param up Mandelstam up
 */
cdbl A2(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up);

/**
 * @brief NLO interference between photon-singlet and photon-non-singlet matrix
 * element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam t1
 * @param u1 Mandelstam u1
 * @param tp Mandelstam tp
 * @param up Mandelstam up
 */
cdbl A3(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up);

}  // namespace ME
}  // namespace ProHQinUPC

#endif  // PROHQINUPC_SRC_ME_H_
