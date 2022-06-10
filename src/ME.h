#include "../include/config.h"

namespace ME {

// cast MMa as macro
#define Power(x,y) pow(x,y)

// Mandelstam remapping
#define DEF_s5 cdbl s5 = s + tp + up;
#define DEF_u7 cdbl u7 = - s - u1 - up;

/**
 * @brief LO photon-gluon matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam for scattering angle
 */
cdbl BQED(cdbl m2, cdbl s, cdbl t1);

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
 * @brief NLO interference between photon-singlet and photon-non-singlet matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam t1
 * @param u1 Mandelstam u1
 * @param tp Mandelstam tp
 * @param up Mandelstam up
 */
cdbl A3(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up);

} // namespace ME
