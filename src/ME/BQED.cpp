#include "../ME.h"

// Mandelstam remapping
#define DEF_u1 cdbl u1 = - s - t1;

cdbl ME::BQED(cdbl m2, cdbl s, cdbl t1) {
    DEF_u1
    return (-2*Power(m2,2)*Power(s,2))/(Power(t1,2)*Power(u1,2)) + (2*m2*s)/(t1*u1) + t1/(2.*u1) + u1/(2.*t1);
}
