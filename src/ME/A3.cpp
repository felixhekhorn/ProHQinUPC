#include "../ME.h"

cdbl ProHQinUPC::ME::A3(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up) {
  DEF_u7 DEF_s5 return Power(s5, 2) * (2 / u1 - 2 / u7) +
      (2 * s5 *
       (-2 * u1 * (m2 + t1 + 2 * u1) + (2 * (m2 + t1) - u1) * u7 +
        Power(u7, 2))) /
          (u1 * u7) +
      (-13 * Power(u1, 3) - 15 * Power(u1, 2) * u7 - 5 * u1 * Power(u7, 2) +
       Power(u7, 3) + 4 * Power(t1, 2) * (-u1 + u7) -
       2 * m2 * (u1 - 3 * u7) * (u1 + u7) - 8 * t1 * u1 * (2 * u1 + u7)) /
          (u1 * u7) -
      ((u1 + u7) *
       (u1 * (8 * Power(t1, 2) + 14 * t1 * u1 + 7 * Power(u1, 2)) +
        4 * (t1 + u1) * (t1 + 2 * u1) * u7 + (2 * t1 + 3 * u1) * Power(u7, 2) -
        2 * m2 * (u1 + u7) * (4 * t1 + u1 + 2 * u7))) /
          (s5 * u1 * u7) +
      ((-2 * Power(s5, 2) * (u1 + u7)) / u7 -
       (2 * s5 * (u1 + u7) *
        (2 * m2 * u1 + 3 * u1 * (t1 + u1) + (t1 + 2 * u1) * u7)) /
           (u1 * u7) -
       ((t1 + u1) * Power(u1 + u7, 2) *
        (4 * Power(t1, 2) + 2 * m2 * u1 + 6 * t1 * u1 + 3 * Power(u1, 2) +
         2 * (m2 + t1 + u1) * u7 + Power(u7, 2))) /
           (s5 * u1 * u7) -
       ((u1 + u7) *
        (u1 * (8 * Power(t1, 2) + 14 * t1 * u1 + 7 * Power(u1, 2)) +
         4 * (t1 + u1) * (t1 + 2 * u1) * u7 + (2 * t1 + 3 * u1) * Power(u7, 2) +
         2 * m2 * (2 * t1 + 3 * u1) * (u1 + u7))) /
           (u1 * u7)) /
          s +
      Power(s, 2) *
          (2 / u1 - 2 / u7 + ((8 * m2) / u1 - (2 * (u1 + u7)) / u7) / s5) +
      s * (s5 * (2 / u1 - 2 / u7) +
           (2 * (-2 * u1 * (t1 + 2 * u1) + (2 * t1 - u1) * u7 + Power(u7, 2) +
                 2 * m2 * (u1 + u7))) /
               (u1 * u7) -
           (2 * (u1 + u7) *
            (3 * u1 * (t1 + u1) + (t1 + 2 * u1) * u7 -
             2 * m2 * (2 * t1 + u1 + 3 * u7))) /
               (s5 * u1 * u7));
}
