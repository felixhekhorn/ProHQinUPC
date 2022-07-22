#include "../ME.h"
#include "./Consts.hpp"

namespace ProHQinUPC {
namespace ME {
cdbl RCounterYm(cdbl m2, cdbl s, cdbl x, cdbl Theta1, cdbl Theta2) {
  cdbl s5 = x * s;
  cdbl beta5 = sqrt(1. - 4. * m2 / s5);
  cdbl t1c = -s / 2. * (1. - beta5 * cos(Theta1));
  if (1. - x < 1e-7) {
    cdbl t1sc = -s / 2. * (1. - sqrt(1. - 4. * m2 / s) * cos(Theta1));
    return RCounterXYm(m2, s, t1sc);
  }
  return Color::CA *
         ((-2 * (4 * Power(m2, 2) * Power(s, 4) * (2 + (-2 + x) * x) +
                 4 * m2 * Power(s, 3) * t1c * (s + t1c) * x * (2 + (-2 + x) * x) +
                 Power(s, 2) * t1c * (s + t1c) * (Power(s, 2) + 2 * s * t1c + 2 * Power(t1c, 2)) *
                     Power(1 + (-1 + x) * x, 2))) /
              (s * Power(t1c, 2) * Power(s + t1c, 2) * Power(x, 2)) +
          (4 * Power(beta5, 2) * m2 * Power(s, 4) * Power(-1 + x, 2) * Power(Cos(Theta2), 2) * Power(Sin(Theta1), 2)) /
              (Power(t1c, 2) * Power(s + t1c, 2) * Power(x, 3)));
}
}  // namespace ME
}  // namespace ProHQinUPC
