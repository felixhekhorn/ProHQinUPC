#include "../include/config.h"

namespace ME {

// cast MMa as macro
#define Power(x,y) pow(x,y)

// Mandelstam remappings
#define DEF_u1 cdbl u1 = - s - t1;

/**
 * @brief LO QED matrix element
 * @param m2 mass
 * @param s center-of-mass energy
 * @param t1 Mandelstam for scattering angle
 */
cdbl BQED(cdbl m2, cdbl s, cdbl t1);

} // namespace ME
