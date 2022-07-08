#include "../ME.h"

namespace ProHQinUPC {
namespace ME {
cdbl A2(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up) {
  DEF_s5 return (-2 * s5 * tp) / s - (2 * tp * (2 * (m2 + t1) + u1)) / s + (2 * tp * up) / s +
      (-((tp * (-4 * m2 * s + Power(s, 2) + 2 * s * (t1 + u1) + 2 * (2 * Power(t1, 2) + 2 * t1 * u1 + Power(u1, 2)))) /
         s) +
       (2 * (2 * m2 + t1) * tp * up) / s - (tp * Power(up, 2)) / s) /
          s5 +
      (-2 * m2 * s * tp - (2 * m2 * tp * Power(up, 2)) / s) / Power(s5, 2);
}
}  // namespace ME
}  // namespace ProHQinUPC
