#include "../ME.h"

cdbl ProHQinUPC::ME::A1(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up) {
    DEF_u7
    return (2*Power(tp,2)*(s + u1 + u7))/(u1*u7) - (4*m2*(s + u1 + u7)*Power(s*u7 + t1*(u1 + u7),2))/(tp*Power(u1,2)*Power(u7,2)) - (2*tp*(s + u1 + u7)*(u1*u7*(-s - 2*t1 + u7) + m2*(Power(u1,2) + Power(u7,2))))/(Power(u1,2)*Power(u7,2)) + ((s + u1 + u7)*(-4*Power(m2,2)*Power(u1 + u7,2) - 4*m2*(u1 + u7)*(t1*u1 + (s + t1 + u1)*u7) + u1*u7*(2*Power(s,2) + 4*Power(t1,2) + 2*t1*u1 + Power(u1,2) + 2*s*(2*t1 + u1) - 2*t1*u7 + Power(u7,2))))/(Power(u1,2)*Power(u7,2));
}
