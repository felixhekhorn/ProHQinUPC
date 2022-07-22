#include "../ME.h"
#include "./Consts.hpp"

namespace ProHQinUPC {
namespace ME {
cdbl RCounterX(cdbl m2, cdbl s, cdbl y, cdbl Theta1, cdbl Theta2) {
  cdbl beta = sqrt(1. - 4. * m2 / s);
  if (1. + y < 1e-7) {
    cdbl t1sc = -s / 2. * (1. - beta * cos(Theta1));
    return RCounterXYm(m2, s, t1sc);
  }
  cdbl EikonalFactorOKCounterX =
      (-2 * (-1 + y) *
       (s * y - 2 * m2 * (1 + y) +
        Power(beta, 2) * s * Cos(Theta1) * (-(y * Cos(Theta1)) + Sqrt(1 - Power(y, 2)) * Cos(Theta2) * Sin(Theta1)))) /
      ((-1 + beta * y * Cos(Theta1) - beta * Sqrt(1 - Power(y, 2)) * Cos(Theta2) * Sin(Theta1)) *
       (1 + beta * y * Cos(Theta1) - beta * Sqrt(1 - Power(y, 2)) * Cos(Theta2) * Sin(Theta1)));
  cdbl EikonalFactorQEDCounterX =
      (-2 * (4 * m2 - s) * (-1 + Power(y, 2)) *
       (-1 + Power(y, 2) * Power(Cos(Theta1), 2) -
        2 * y * Sqrt(1 - Power(y, 2)) * Cos(Theta1) * Cos(Theta2) * Sin(Theta1) -
        (-1 + Power(y, 2)) * Power(Cos(Theta2), 2) * Power(Sin(Theta1), 2))) /
      (Power(1 + beta * y * Cos(Theta1) - beta * Sqrt(1 - Power(y, 2)) * Cos(Theta2) * Sin(Theta1), 2) *
       Power(1 - beta * y * Cos(Theta1) + beta * Sqrt(1 - Power(y, 2)) * Cos(Theta2) * Sin(Theta1), 2));
  return Color::CA * EikonalFactorOKCounterX + 2. * Color::CF * EikonalFactorQEDCounterX;
}
}  // namespace ME
}  // namespace ProHQinUPC
