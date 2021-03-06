#include "../ME.h"

namespace ProHQinUPC {
namespace ME {
cdbl ROK(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up) {
  DEF_s5 DEF_s3 DEF_s4 DEF_u6 DEF_u7 return tp * up *
      (-12 / s - 2 / s3 - (9 * m2) / (2. * s * s3) - 2 / s4 - (9 * m2) / (2. * s * s4) + (3 * m2) / (s3 * s4) -
       (12 * Power(m2, 2)) / (s * s3 * s4) + (3 * s3) / (4. * s * s4) + (3 * s4) / (4. * s * s3) +
       (33 * s5) / (4. * s * s3) + (33 * s5) / (4. * s * s4) + (6 * m2 * s5) / (s * s3 * s4) - 5 / (4. * t1) -
       (6 * m2) / (s * t1) - (11 * m2) / (s3 * t1) + (12 * Power(m2, 2)) / (s * s3 * t1) - (49 * m2) / (4. * s4 * t1) -
       (6 * Power(m2, 2)) / (s * s4 * t1) + (6 * Power(m2, 2)) / (s3 * s4 * t1) + (m2 * s) / (2. * s3 * s4 * t1) +
       s3 / (s4 * t1) + (3 * m2 * s3) / (s * s4 * t1) + (9 * s5) / (4. * s * t1) + (2 * s5) / (s3 * t1) -
       (6 * m2 * s5) / (s * s3 * t1) + (31 * s5) / (4. * s4 * t1) + (3 * m2 * s5) / (s * s4 * t1) -
       (2 * m2 * s5) / (s3 * s4 * t1) - (3 * s3 * s5) / (2. * s * s4 * t1) - (33 * t1) / (4. * s * s3) -
       (9 * t1) / (4. * s * s4) - 5 / tp + (6 * m2) / (s * tp) + (5 * m2) / (2. * s3 * tp) - (9 * s3) / (4. * s * tp) +
       (5 * m2) / (2. * s4 * tp) - (3 * s3) / (4. * s4 * tp) + (3 * m2 * s3) / (s * s4 * tp) -
       (9 * s4) / (4. * s * tp) - (3 * s4) / (4. * s3 * tp) + (3 * m2 * s4) / (s * s3 * tp) - (3 * s5) / (2. * s * tp) -
       (3 * s5) / (4. * s3 * tp) - (3 * s5) / (4. * s4 * tp) + m2 / (t1 * tp) + (m2 * s3) / (2. * s4 * t1 * tp) +
       (3 * s3 * s5) / (4. * s4 * t1 * tp) - (15 * t1) / (2. * s * tp) + (3 * t1) / (2. * s3 * tp) +
       (9 * m2 * t1) / (2. * s * s3 * tp) + (3 * m2 * t1) / (2. * s * s4 * tp) - (3 * s4 * t1) / (2. * s * s3 * tp) -
       (3 * Power(t1, 2)) / (s * s3 * tp) - (3 * tp) / (s * s3) - (3 * tp) / (s * s4) + (3 * m2 * tp) / (s * s3 * s4) -
       (3 * m2 * tp) / (2. * s * s3 * t1) + (6 * Power(m2, 2) * tp) / (s * s3 * s4 * t1) +
       (9 * s5 * tp) / (2. * s * s3 * t1) + (3 * m2 * s5 * tp) / (s * s3 * s4 * t1) -
       (3 * Power(s5, 2) * tp) / (2. * s * s3 * s4 * t1) - Power(m2, 2) / (s4 * Power(u1, 2)) -
       (3 * m2 * s5) / (s4 * Power(u1, 2)) + (3 * m2 * s * s4) / (Power(tp, 2) * Power(u1, 2)) +
       (m2 * s3 * s4) / (Power(tp, 2) * Power(u1, 2)) + (3 * m2 * s4 * t1) / (Power(tp, 2) * Power(u1, 2)) +
       (6 * Power(m2, 2)) / (tp * Power(u1, 2)) + (m2 * s) / (tp * Power(u1, 2)) + (m2 * s3) / (tp * Power(u1, 2)) -
       (2 * Power(m2, 2) * s) / (s4 * tp * Power(u1, 2)) - (Power(m2, 2) * s3) / (s4 * tp * Power(u1, 2)) -
       (m2 * s5) / (tp * Power(u1, 2)) + (m2 * t1) / (tp * Power(u1, 2)) -
       (2 * Power(m2, 2) * t1) / (s4 * tp * Power(u1, 2)) - (9 * m2) / (2. * s * u1) + (17 * m2) / (4. * s3 * u1) +
       (7 * m2) / (4. * s4 * u1) - (6 * Power(m2, 2)) / (s3 * s4 * u1) + (3 * s5) / (2. * s * u1) +
       s5 / (4. * s3 * u1) + (15 * s5) / (4. * s4 * u1) + (2 * m2 * s5) / (s3 * s4 * u1) +
       Power(s5, 2) / (2. * s3 * s4 * u1) + (17 * m2) / (4. * t1 * u1) - (4 * Power(m2, 2)) / (s4 * t1 * u1) +
       (m2 * s) / (s4 * t1 * u1) + (m2 * s3) / (s4 * t1 * u1) + s5 / (4. * t1 * u1) - (s * s5) / (2. * s4 * t1 * u1) -
       (3 * s3 * s5) / (4. * s4 * t1 * u1) + Power(s5, 2) / (4. * s4 * t1 * u1) - (9 * m2 * t1) / (2. * s * s3 * u1) -
       (3 * m2 * t1) / (2. * s * s4 * u1) - (12 * Power(m2, 2) * t1) / (s * s3 * s4 * u1) +
       (3 * s5 * t1) / (2. * s * s3 * u1) + (21 * s5 * t1) / (2. * s * s4 * u1) +
       (3 * Power(s5, 2) * t1) / (s * s3 * s4 * u1) + Power(s3, 2) / (2. * Power(tp, 2) * u1) -
       (3 * s * s4) / (2. * Power(tp, 2) * u1) - (s3 * s4) / (2. * Power(tp, 2) * u1) +
       (3 * s3 * t1) / (Power(tp, 2) * u1) - (3 * s4 * t1) / (2. * Power(tp, 2) * u1) +
       Power(t1, 2) / (2. * Power(tp, 2) * u1) + (10 * m2) / (tp * u1) - (3 * s) / (2. * tp * u1) -
       (3 * Power(m2, 2)) / (s3 * tp * u1) - (m2 * s) / (s3 * tp * u1) - s3 / (2. * tp * u1) -
       (3 * m2 * s3) / (s * tp * u1) - (3 * Power(m2, 2)) / (s4 * tp * u1) + (m2 * s) / (s4 * tp * u1) +
       (13 * m2 * s3) / (4. * s4 * tp * u1) - Power(s3, 2) / (4. * s4 * tp * u1) + (2 * s4) / (tp * u1) -
       (3 * m2 * s4) / (s * tp * u1) + (5 * m2 * s4) / (4. * s3 * tp * u1) - (9 * s5) / (4. * tp * u1) +
       (m2 * s5) / (s3 * tp * u1) - (3 * s3 * s5) / (s * tp * u1) + (5 * m2 * s5) / (2. * s4 * tp * u1) -
       (5 * s3 * s5) / (4. * s4 * tp * u1) - (3 * Power(s5, 2)) / (4. * s4 * tp * u1) -
       (3 * Power(m2, 2)) / (t1 * tp * u1) + (5 * m2 * s) / (2. * t1 * tp * u1) - (2 * m2 * s3) / (t1 * tp * u1) -
       (Power(m2, 2) * s) / (s4 * t1 * tp * u1) - (3 * Power(m2, 2) * s3) / (s4 * t1 * tp * u1) +
       (m2 * s * s3) / (s4 * t1 * tp * u1) + (3 * m2 * Power(s3, 2)) / (2. * s4 * t1 * tp * u1) -
       (m2 * s4) / (t1 * tp * u1) + (m2 * s5) / (t1 * tp * u1) - (3 * s3 * s5) / (4. * t1 * tp * u1) +
       (3 * m2 * s * s5) / (2. * s4 * t1 * tp * u1) + (m2 * s3 * s5) / (2. * s4 * t1 * tp * u1) -
       (s * s3 * s5) / (2. * s4 * t1 * tp * u1) - (s * Power(s5, 2)) / (2. * s4 * t1 * tp * u1) - (2 * t1) / (tp * u1) -
       (2 * m2 * t1) / (s3 * tp * u1) - (3 * s3 * t1) / (2. * s * tp * u1) + (5 * m2 * t1) / (s4 * tp * u1) +
       (s3 * t1) / (4. * s4 * tp * u1) + (3 * m2 * s3 * t1) / (2. * s * s4 * tp * u1) +
       (3 * s4 * t1) / (2. * s * tp * u1) - (5 * s4 * t1) / (4. * s3 * tp * u1) -
       (3 * m2 * s4 * t1) / (2. * s * s3 * tp * u1) - (3 * s5 * t1) / (2. * s3 * tp * u1) -
       (s5 * t1) / (4. * s4 * tp * u1) - (3 * Power(t1, 2)) / (2. * s * tp * u1) -
       (3 * m2 * Power(t1, 2)) / (s * s3 * tp * u1) + (3 * m2 * Power(t1, 2)) / (s * s4 * tp * u1) -
       (3 * s4 * Power(t1, 2)) / (2. * s * s3 * tp * u1) - (3 * s5 * Power(t1, 2)) / (s * s3 * tp * u1) +
       (3 * u1) / (4. * s * s3) - (3 * m2 * u1) / (s * s3 * s4) + (3 * s5 * u1) / (2. * s * s3 * s4) -
       (3 * u1) / (4. * s * t1) + (3 * m2 * u1) / (s * s3 * t1) + (9 * m2 * u1) / (2. * s * s4 * t1) -
       (m2 * u1) / (s3 * s4 * t1) - (12 * Power(m2, 2) * u1) / (s * s3 * s4 * t1) - (3 * s5 * u1) / (2. * s * s3 * t1) -
       (9 * s5 * u1) / (4. * s * s4 * t1) + (s5 * u1) / (s3 * s4 * t1) + (12 * m2 * s5 * u1) / (s * s3 * s4 * t1) -
       (3 * Power(s5, 2) * u1) / (s * s3 * s4 * t1) + (3 * u1) / (4. * s * tp) - (3 * s4 * u1) / (2. * s * s3 * tp) +
       (3 * t1 * u1) / (2. * s * s3 * tp) + (3 * tp * u1) / (2. * s * s3 * t1) - (3 * tp * u1) / (2. * s * s4 * t1) +
       (3 * m2 * tp * u1) / (s * s3 * s4 * t1) - (3 * s5 * tp * u1) / (s * s3 * s4 * t1) +
       ((64 * m2) / (s3 * t1) + (32 * m2) / (s4 * t1) - (32 * Power(m2, 2)) / (s3 * s4 * t1) - (16 * s5) / (s3 * t1) -
        (16 * s5) / (s4 * t1) + (48 * m2 * s5) / (s3 * s4 * t1) - (16 * Power(s5, 2)) / (s3 * s4 * t1) +
        (32 * m2) / (s3 * u6) + (64 * m2) / (s4 * u6) - (32 * Power(m2, 2)) / (s3 * s4 * u6) - (16 * s5) / (s3 * u6) -
        (16 * s5) / (s4 * u6) + (48 * m2 * s5) / (s3 * s4 * u6) - (16 * Power(s5, 2)) / (s3 * s4 * u6) -
        (32 * Power(m2, 2)) / (s3 * t1 * u6) - (32 * Power(m2, 2)) / (s4 * t1 * u6) -
        (128 * Power(m2, 3)) / (s3 * s4 * t1 * u6) + (48 * m2 * s5) / (s3 * t1 * u6) + (48 * m2 * s5) / (s4 * t1 * u6) +
        (64 * Power(m2, 2) * s5) / (s3 * s4 * t1 * u6) - (16 * Power(s5, 2)) / (s3 * t1 * u6) -
        (16 * Power(s5, 2)) / (s4 * t1 * u6) + (32 * m2 * Power(s5, 2)) / (s3 * s4 * t1 * u6) -
        (16 * Power(s5, 3)) / (s3 * s4 * t1 * u6) - (128 * Power(m2, 2) * tp) / (s3 * s4 * t1 * u6) +
        (16 * m2 * s5 * tp) / (s3 * s4 * t1 * u6) - (16 * m2 * Power(tp, 2)) / (s3 * s4 * t1 * u6)) /
           16. -
       5 / (4. * u6) - (6 * m2) / (s * u6) - (49 * m2) / (4. * s3 * u6) - (6 * Power(m2, 2)) / (s * s3 * u6) -
       (11 * m2) / (s4 * u6) + (12 * Power(m2, 2)) / (s * s4 * u6) + (6 * Power(m2, 2)) / (s3 * s4 * u6) +
       (m2 * s) / (2. * s3 * s4 * u6) + s4 / (s3 * u6) + (3 * m2 * s4) / (s * s3 * u6) + (9 * s5) / (4. * s * u6) +
       (31 * s5) / (4. * s3 * u6) + (3 * m2 * s5) / (s * s3 * u6) + (2 * s5) / (s4 * u6) -
       (6 * m2 * s5) / (s * s4 * u6) - (2 * m2 * s5) / (s3 * s4 * u6) - (3 * s4 * s5) / (2. * s * s3 * u6) -
       (4 * m2) / (t1 * u6) + (8 * Power(m2, 2)) / (s3 * t1 * u6) + (m2 * s) / (2. * s3 * t1 * u6) +
       (8 * Power(m2, 2)) / (s4 * t1 * u6) + (m2 * s) / (2. * s4 * t1 * u6) -
       (4 * Power(m2, 2) * s) / (s3 * s4 * t1 * u6) + (m2 * s3) / (s4 * t1 * u6) + (m2 * s4) / (s3 * t1 * u6) +
       (2 * s5) / (t1 * u6) - (9 * m2 * s5) / (s3 * t1 * u6) - (9 * m2 * s5) / (s4 * t1 * u6) +
       (8 * Power(m2, 2) * s5) / (s3 * s4 * t1 * u6) + (7 * m2 * s * s5) / (s3 * s4 * t1 * u6) -
       (s3 * s5) / (2. * s4 * t1 * u6) - (s4 * s5) / (2. * s3 * t1 * u6) + (5 * Power(s5, 2)) / (2. * s3 * t1 * u6) +
       (5 * Power(s5, 2)) / (2. * s4 * t1 * u6) - (8 * m2 * Power(s5, 2)) / (s3 * s4 * t1 * u6) -
       (2 * s * Power(s5, 2)) / (s3 * s4 * t1 * u6) + (2 * Power(s5, 3)) / (s3 * s4 * t1 * u6) + t1 / (4. * s3 * u6) -
       (6 * m2 * t1) / (s * s3 * u6) - (12 * m2 * t1) / (s * s4 * u6) + (3 * m2 * t1) / (2. * s3 * s4 * u6) +
       (12 * Power(m2, 2) * t1) / (s * s3 * s4 * u6) - (3 * s4 * t1) / (4. * s * s3 * u6) +
       (15 * s5 * t1) / (4. * s * s3 * u6) - (s5 * t1) / (s3 * s4 * u6) - (6 * m2 * s5 * t1) / (s * s3 * s4 * u6) +
       m2 / (tp * u6) + (m2 * s4) / (2. * s3 * tp * u6) + (3 * s4 * s5) / (4. * s3 * tp * u6) -
       (3 * t1) / (4. * tp * u6) + (3 * m2 * t1) / (2. * s * tp * u6) - (m2 * t1) / (s3 * tp * u6) +
       (3 * s4 * t1) / (4. * s * tp * u6) + (7 * s4 * t1) / (4. * s3 * tp * u6) +
       (3 * m2 * s4 * t1) / (2. * s * s3 * tp * u6) - (3 * Power(s4, 2) * t1) / (4. * s * s3 * tp * u6) +
       (3 * s5 * t1) / (2. * s3 * tp * u6) + (3 * s4 * s5 * t1) / (4. * s * s3 * tp * u6) -
       (3 * Power(t1, 2)) / (4. * s3 * tp * u6) + (3 * m2 * Power(t1, 2)) / (s * s3 * tp * u6) -
       (3 * m2 * tp) / (2. * s * s4 * u6) + (6 * Power(m2, 2) * tp) / (s * s3 * s4 * u6) +
       (9 * s5 * tp) / (2. * s * s4 * u6) + (3 * m2 * s5 * tp) / (s * s3 * s4 * u6) -
       (3 * Power(s5, 2) * tp) / (2. * s * s3 * s4 * u6) - (3 * m2 * tp) / (s3 * t1 * u6) -
       (6 * Power(m2, 2) * tp) / (s * s3 * t1 * u6) - (3 * m2 * tp) / (s4 * t1 * u6) -
       (6 * Power(m2, 2) * tp) / (s * s4 * t1 * u6) + (8 * Power(m2, 2) * tp) / (s3 * s4 * t1 * u6) -
       (2 * m2 * s * tp) / (s3 * s4 * t1 * u6) + (3 * s5 * tp) / (2. * s3 * t1 * u6) +
       (3 * s5 * tp) / (2. * s4 * t1 * u6) + (m2 * s5 * tp) / (s3 * s4 * t1 * u6) +
       (3 * Power(s5, 2) * tp) / (2. * s * s3 * t1 * u6) + (3 * Power(s5, 2) * tp) / (2. * s * s4 * t1 * u6) -
       (Power(s5, 2) * tp) / (s3 * s4 * t1 * u6) - (3 * m2 * t1 * tp) / (2. * s * s3 * s4 * u6) +
       (3 * s5 * t1 * tp) / (2. * s * s3 * s4 * u6) - (m2 * Power(tp, 2)) / (s3 * s4 * t1 * u6) -
       Power(m2, 2) / (Power(u1, 2) * u6) - (8 * Power(m2, 3)) / (s4 * Power(u1, 2) * u6) +
       (2 * Power(m2, 2) * s) / (s4 * Power(u1, 2) * u6) + (2 * Power(m2, 2) * s3) / (s4 * Power(u1, 2) * u6) -
       (3 * m2 * s5) / (Power(u1, 2) * u6) + (2 * Power(m2, 2) * s5) / (s4 * Power(u1, 2) * u6) +
       (2 * Power(m2, 2) * t1) / (s4 * Power(u1, 2) * u6) - (Power(m2, 2) * s) / (tp * Power(u1, 2) * u6) -
       (2 * Power(m2, 2) * s3) / (tp * Power(u1, 2) * u6) - (2 * Power(m2, 2) * s4) / (tp * Power(u1, 2) * u6) -
       (m2 * s * s4) / (tp * Power(u1, 2) * u6) - (2 * m2 * s4 * s5) / (tp * Power(u1, 2) * u6) -
       (Power(m2, 2) * t1) / (tp * Power(u1, 2) * u6) - (m2 * s4 * t1) / (tp * Power(u1, 2) * u6) +
       (2 * Power(m2, 2) * tp) / (s4 * Power(u1, 2) * u6) - (2 * m2 * s5 * tp) / (s4 * Power(u1, 2) * u6) -
       (23 * m2) / (4. * u1 * u6) - (12 * Power(m2, 2)) / (s * u1 * u6) - (4 * Power(m2, 2)) / (s3 * u1 * u6) -
       (m2 * s) / (2. * s3 * u1 * u6) + (16 * Power(m2, 2)) / (s4 * u1 * u6) - (3 * m2 * s) / (s4 * u1 * u6) -
       (8 * Power(m2, 3)) / (s3 * s4 * u1 * u6) - (3 * m2 * s3) / (2. * s4 * u1 * u6) +
       (m2 * s4) / (2. * s3 * u1 * u6) + (21 * s5) / (4. * u1 * u6) + (s * s5) / (s3 * u1 * u6) +
       (s * s5) / (s4 * u1 * u6) + (6 * Power(m2, 2) * s5) / (s3 * s4 * u1 * u6) -
       (2 * m2 * s * s5) / (s3 * s4 * u1 * u6) - (3 * s3 * s5) / (2. * s4 * u1 * u6) +
       (3 * Power(s5, 2)) / (s * u1 * u6) + Power(s5, 2) / (4. * s3 * u1 * u6) -
       (3 * Power(s5, 2)) / (2. * s4 * u1 * u6) - (m2 * Power(s5, 2)) / (s3 * s4 * u1 * u6) +
       (s * Power(s5, 2)) / (s3 * s4 * u1 * u6) - (6 * Power(m2, 2)) / (t1 * u1 * u6) + (m2 * s) / (t1 * u1 * u6) -
       (8 * Power(m2, 3)) / (s4 * t1 * u1 * u6) + (4 * Power(m2, 2) * s3) / (s4 * t1 * u1 * u6) +
       (5 * m2 * s * s3) / (2. * s4 * t1 * u1 * u6) + (2 * m2 * s5) / (t1 * u1 * u6) +
       (6 * Power(m2, 2) * s5) / (s4 * t1 * u1 * u6) + (3 * m2 * s * s5) / (s4 * t1 * u1 * u6) -
       (2 * m2 * s3 * s5) / (s4 * t1 * u1 * u6) - (s * s3 * s5) / (s4 * t1 * u1 * u6) +
       Power(s5, 2) / (2. * t1 * u1 * u6) - (m2 * Power(s5, 2)) / (s4 * t1 * u1 * u6) -
       (s * Power(s5, 2)) / (s4 * t1 * u1 * u6) - (3 * m2 * t1) / (2. * s * u1 * u6) - (m2 * t1) / (2. * s3 * u1 * u6) -
       (15 * m2 * t1) / (2. * s4 * u1 * u6) + (24 * Power(m2, 2) * t1) / (s * s4 * u1 * u6) -
       (2 * Power(m2, 2) * t1) / (s3 * s4 * u1 * u6) - (6 * m2 * s3 * t1) / (s * s4 * u1 * u6) +
       (21 * s5 * t1) / (2. * s * u1 * u6) + (3 * s5 * t1) / (4. * s3 * u1 * u6) + (3 * s5 * t1) / (2. * s4 * u1 * u6) -
       (6 * m2 * s5 * t1) / (s * s4 * u1 * u6) - (2 * m2 * s5 * t1) / (s3 * s4 * u1 * u6) +
       (3 * Power(s5, 2) * t1) / (2. * s3 * s4 * u1 * u6) - (6 * m2 * Power(t1, 2)) / (s * s4 * u1 * u6) -
       (3 * Power(m2, 2)) / (tp * u1 * u6) - (3 * m2 * s) / (4. * tp * u1 * u6) +
       (Power(m2, 2) * s) / (s3 * tp * u1 * u6) + (2 * m2 * s3) / (tp * u1 * u6) - (3 * m2 * s4) / (tp * u1 * u6) +
       (s * s4) / (2. * tp * u1 * u6) - (3 * Power(m2, 2) * s4) / (s3 * tp * u1 * u6) -
       (5 * m2 * s * s4) / (4. * s3 * tp * u1 * u6) + (m2 * Power(s4, 2)) / (2. * s3 * tp * u1 * u6) +
       (m2 * s5) / (tp * u1 * u6) - (s * s5) / (2. * tp * u1 * u6) - (3 * m2 * s * s5) / (2. * s3 * tp * u1 * u6) -
       (s3 * s5) / (4. * tp * u1 * u6) + (2 * s4 * s5) / (tp * u1 * u6) + (m2 * s4 * s5) / (2. * s3 * tp * u1 * u6) +
       (s * s4 * s5) / (2. * s3 * tp * u1 * u6) + (s * Power(s5, 2)) / (2. * s3 * tp * u1 * u6) +
       (m2 * t1) / (tp * u1 * u6) - (3 * Power(m2, 2) * t1) / (s3 * tp * u1 * u6) -
       (m2 * s * t1) / (2. * s3 * tp * u1 * u6) + (s3 * t1) / (4. * tp * u1 * u6) +
       (3 * m2 * s3 * t1) / (s * tp * u1 * u6) + (s4 * t1) / (tp * u1 * u6) + (3 * m2 * s4 * t1) / (s * tp * u1 * u6) -
       (s * s4 * t1) / (2. * s3 * tp * u1 * u6) - (5 * s5 * t1) / (4. * tp * u1 * u6) -
       (m2 * s5 * t1) / (s3 * tp * u1 * u6) - (s * s5 * t1) / (2. * s3 * tp * u1 * u6) +
       (3 * s4 * s5 * t1) / (s * tp * u1 * u6) + (s4 * s5 * t1) / (2. * s3 * tp * u1 * u6) +
       (3 * Power(s5, 2) * t1) / (4. * s3 * tp * u1 * u6) - Power(t1, 2) / (4. * tp * u1 * u6) +
       (3 * m2 * Power(t1, 2)) / (2. * s * tp * u1 * u6) - (3 * m2 * Power(t1, 2)) / (2. * s3 * tp * u1 * u6) +
       (3 * s4 * Power(t1, 2)) / (2. * s * tp * u1 * u6) - (s4 * Power(t1, 2)) / (2. * s3 * tp * u1 * u6) -
       (3 * s5 * Power(t1, 2)) / (4. * s3 * tp * u1 * u6) - (4 * m2 * tp) / (s4 * u1 * u6) +
       (3 * s5 * tp) / (s4 * u1 * u6) - (3 * m2 * s5 * tp) / (2. * s3 * s4 * u1 * u6) +
       (Power(s5, 2) * tp) / (2. * s3 * s4 * u1 * u6) - (3 * m2 * s5 * tp) / (2. * s4 * t1 * u1 * u6) +
       (Power(s5, 2) * tp) / (2. * s4 * t1 * u1 * u6) - (6 * m2 * t1 * tp) / (s * s4 * u1 * u6) +
       (6 * s5 * t1 * tp) / (s * s4 * u1 * u6) - (15 * m2 * u1) / (2. * s * s3 * u6) + (m2 * u1) / (s3 * s4 * u6) -
       (3 * s4 * u1) / (4. * s * s3 * u6) + (15 * s5 * u1) / (4. * s * s3 * u6) - (s5 * u1) / (s3 * s4 * u6) -
       (m2 * u1) / (s3 * t1 * u6) + (m2 * u1) / (s4 * t1 * u6) - (6 * Power(m2, 2) * u1) / (s3 * s4 * t1 * u6) +
       (s5 * u1) / (2. * s3 * t1 * u6) - (s5 * u1) / (2. * s4 * t1 * u6) + (6 * m2 * s5 * u1) / (s3 * s4 * t1 * u6) -
       (3 * Power(s5, 2) * u1) / (2. * s3 * s4 * t1 * u6) + (3 * t1 * u1) / (4. * s * s3 * u6) +
       (3 * tp * u1) / (4. * s * s3 * u6) + (3 * m2 * tp * u1) / (2. * s * s3 * s4 * u6) +
       (3 * s5 * tp * u1) / (2. * s * s3 * s4 * u6) - (3 * m2 * tp * u1) / (s * s3 * t1 * u6) -
       (m2 * tp * u1) / (2. * s3 * s4 * t1 * u6) - (6 * Power(m2, 2) * tp * u1) / (s * s3 * s4 * t1 * u6) +
       (3 * s5 * tp * u1) / (2. * s * s3 * t1 * u6) + (6 * m2 * s5 * tp * u1) / (s * s3 * s4 * t1 * u6) -
       (3 * Power(s5, 2) * tp * u1) / (2. * s * s3 * s4 * t1 * u6) -
       (3 * m2 * Power(tp, 2) * u1) / (2. * s * s3 * s4 * t1 * u6) - (9 * u6) / (4. * s * s3) -
       (33 * u6) / (4. * s * s4) - (12 * m2 * u6) / (s * s3 * t1) + u6 / (4. * s4 * t1) -
       (6 * m2 * u6) / (s * s4 * t1) + (3 * m2 * u6) / (2. * s3 * s4 * t1) +
       (12 * Power(m2, 2) * u6) / (s * s3 * s4 * t1) - (3 * s3 * u6) / (4. * s * s4 * t1) +
       (15 * s5 * u6) / (4. * s * s4 * t1) - (s5 * u6) / (s3 * s4 * t1) - (6 * m2 * s5 * u6) / (s * s3 * s4 * t1) -
       (15 * u6) / (2. * s * tp) + (3 * m2 * u6) / (2. * s * s3 * tp) + (3 * u6) / (2. * s4 * tp) +
       (9 * m2 * u6) / (2. * s * s4 * tp) - (3 * s3 * u6) / (2. * s * s4 * tp) - (3 * u6) / (4. * t1 * tp) +
       (3 * m2 * u6) / (2. * s * t1 * tp) + (3 * s3 * u6) / (4. * s * t1 * tp) - (m2 * u6) / (s4 * t1 * tp) +
       (7 * s3 * u6) / (4. * s4 * t1 * tp) + (3 * m2 * s3 * u6) / (2. * s * s4 * t1 * tp) -
       (3 * Power(s3, 2) * u6) / (4. * s * s4 * t1 * tp) + (3 * s5 * u6) / (2. * s4 * t1 * tp) +
       (3 * s3 * s5 * u6) / (4. * s * s4 * t1 * tp) + (3 * t1 * u6) / (4. * s * s3 * tp) +
       (3 * t1 * u6) / (4. * s * s4 * tp) - (3 * m2 * tp * u6) / (2. * s * s3 * s4 * t1) +
       (3 * s5 * tp * u6) / (2. * s * s3 * s4 * t1) + (m2 * s * u6) / (Power(tp, 2) * Power(u1, 2)) +
       (3 * m2 * s3 * u6) / (Power(tp, 2) * Power(u1, 2)) + (m2 * t1 * u6) / (Power(tp, 2) * Power(u1, 2)) -
       (2 * Power(m2, 2) * u6) / (s4 * tp * Power(u1, 2)) - (m2 * s3 * u6) / (s4 * tp * Power(u1, 2)) -
       (2 * m2 * s5 * u6) / (s4 * tp * Power(u1, 2)) + (m2 * u6) / (2. * s4 * t1 * u1) -
       (s * u6) / (2. * Power(tp, 2) * u1) - (3 * s3 * u6) / (2. * Power(tp, 2) * u1) -
       (t1 * u6) / (2. * Power(tp, 2) * u1) - u6 / (4. * tp * u1) - (3 * m2 * u6) / (2. * s * tp * u1) -
       (m2 * u6) / (s3 * tp * u1) - (3 * s3 * u6) / (2. * s * tp * u1) + (7 * s3 * u6) / (4. * s4 * tp * u1) +
       (11 * s5 * u6) / (4. * s4 * tp * u1) + (7 * m2 * u6) / (2. * t1 * tp * u1) - (s3 * u6) / (2. * t1 * tp * u1) -
       (3 * Power(m2, 2) * u6) / (s4 * t1 * tp * u1) + (m2 * s * u6) / (2. * s4 * t1 * tp * u1) +
       (3 * s * s3 * u6) / (4. * s4 * t1 * tp * u1) + (Power(s3, 2) * u6) / (4. * s4 * t1 * tp * u1) +
       (m2 * s5 * u6) / (2. * s4 * t1 * tp * u1) + (s * s5 * u6) / (4. * s4 * t1 * tp * u1) -
       (s3 * s5 * u6) / (4. * s4 * t1 * tp * u1) + (3 * t1 * u6) / (2. * s * tp * u1) -
       (3 * m2 * t1 * u6) / (s * s3 * tp * u1) + (3 * m2 * t1 * u6) / (s * s4 * tp * u1) +
       (3 * s3 * t1 * u6) / (2. * s * s4 * tp * u1) + (3 * s5 * t1 * u6) / (s * s4 * tp * u1) -
       (3 * u1 * u6) / (2. * s * s4 * t1) + (3 * m2 * u1 * u6) / (s * s3 * s4 * t1) -
       (3 * s5 * u1 * u6) / (2. * s * s3 * s4 * t1) - (3 * u1 * u6) / (4. * s * s3 * tp) +
       (3 * u1 * u6) / (4. * s * s4 * tp) - (3 * u1 * u6) / (4. * s * t1 * tp) +
       (3 * s3 * u1 * u6) / (2. * s * s4 * t1 * tp) - (3 * Power(u6, 2)) / (s * s4 * tp) -
       (3 * Power(u6, 2)) / (4. * s4 * t1 * tp) + (3 * m2 * Power(u6, 2)) / (s * s4 * t1 * tp) +
       (m2 * Power(u6, 2)) / (2. * s4 * t1 * tp * u1) - (3 * u1 * Power(u6, 2)) / (2. * s * s4 * t1 * tp) -
       Power(m2, 2) / (s3 * Power(u7, 2)) - (3 * m2 * s5) / (s3 * Power(u7, 2)) - Power(m2, 2) / (t1 * Power(u7, 2)) -
       (8 * Power(m2, 3)) / (s3 * t1 * Power(u7, 2)) + (2 * Power(m2, 2) * s) / (s3 * t1 * Power(u7, 2)) +
       (2 * Power(m2, 2) * s4) / (s3 * t1 * Power(u7, 2)) - (3 * m2 * s5) / (t1 * Power(u7, 2)) +
       (2 * Power(m2, 2) * s5) / (s3 * t1 * Power(u7, 2)) + (3 * m2 * s * s3) / (Power(tp, 2) * Power(u7, 2)) +
       (m2 * s3 * s4) / (Power(tp, 2) * Power(u7, 2)) + (m2 * s * t1) / (Power(tp, 2) * Power(u7, 2)) +
       (3 * m2 * s4 * t1) / (Power(tp, 2) * Power(u7, 2)) + (6 * Power(m2, 2)) / (tp * Power(u7, 2)) +
       (m2 * s) / (tp * Power(u7, 2)) - (2 * Power(m2, 2) * s) / (s3 * tp * Power(u7, 2)) +
       (m2 * s4) / (tp * Power(u7, 2)) - (Power(m2, 2) * s4) / (s3 * tp * Power(u7, 2)) -
       (m2 * s5) / (tp * Power(u7, 2)) - (Power(m2, 2) * s) / (t1 * tp * Power(u7, 2)) -
       (2 * Power(m2, 2) * s3) / (t1 * tp * Power(u7, 2)) - (m2 * s * s3) / (t1 * tp * Power(u7, 2)) -
       (2 * Power(m2, 2) * s4) / (t1 * tp * Power(u7, 2)) - (2 * m2 * s3 * s5) / (t1 * tp * Power(u7, 2)) -
       (2 * Power(m2, 2) * t1) / (s3 * tp * Power(u7, 2)) - (m2 * s4 * t1) / (s3 * tp * Power(u7, 2)) -
       (2 * m2 * s5 * t1) / (s3 * tp * Power(u7, 2)) + (2 * Power(m2, 2) * tp) / (s3 * t1 * Power(u7, 2)) -
       (2 * m2 * s5 * tp) / (s3 * t1 * Power(u7, 2)) - (3 * m2 * u1) / (s3 * Power(u7, 2)) -
       (3 * m2 * u1) / (t1 * Power(u7, 2)) + (2 * Power(m2, 2) * u1) / (s3 * t1 * Power(u7, 2)) -
       (m2 * u1) / (tp * Power(u7, 2)) - (2 * m2 * s3 * u1) / (t1 * tp * Power(u7, 2)) -
       (2 * m2 * t1 * u1) / (s3 * tp * Power(u7, 2)) - (2 * m2 * tp * u1) / (s3 * t1 * Power(u7, 2)) +
       (2 * Power(m2, 2) * u6) / (s3 * t1 * Power(u7, 2)) + (3 * m2 * s3 * u6) / (Power(tp, 2) * Power(u7, 2)) +
       (m2 * t1 * u6) / (Power(tp, 2) * Power(u7, 2)) + (m2 * u6) / (tp * Power(u7, 2)) -
       (2 * Power(m2, 2) * u6) / (s3 * tp * Power(u7, 2)) - (Power(m2, 2) * u6) / (t1 * tp * Power(u7, 2)) -
       (m2 * s3 * u6) / (t1 * tp * Power(u7, 2)) - (9 * m2) / (2. * s * u7) + (7 * m2) / (4. * s3 * u7) +
       (17 * m2) / (4. * s4 * u7) - (6 * Power(m2, 2)) / (s3 * s4 * u7) + (3 * s5) / (2. * s * u7) +
       (15 * s5) / (4. * s3 * u7) + s5 / (4. * s4 * u7) + (2 * m2 * s5) / (s3 * s4 * u7) +
       Power(s5, 2) / (2. * s3 * s4 * u7) - (23 * m2) / (4. * t1 * u7) - (12 * Power(m2, 2)) / (s * t1 * u7) +
       (16 * Power(m2, 2)) / (s3 * t1 * u7) - (3 * m2 * s) / (s3 * t1 * u7) - (4 * Power(m2, 2)) / (s4 * t1 * u7) -
       (m2 * s) / (2. * s4 * t1 * u7) - (8 * Power(m2, 3)) / (s3 * s4 * t1 * u7) + (m2 * s3) / (2. * s4 * t1 * u7) -
       (3 * m2 * s4) / (2. * s3 * t1 * u7) + (21 * s5) / (4. * t1 * u7) + (s * s5) / (s3 * t1 * u7) +
       (s * s5) / (s4 * t1 * u7) + (6 * Power(m2, 2) * s5) / (s3 * s4 * t1 * u7) -
       (2 * m2 * s * s5) / (s3 * s4 * t1 * u7) - (3 * s4 * s5) / (2. * s3 * t1 * u7) +
       (3 * Power(s5, 2)) / (s * t1 * u7) - (3 * Power(s5, 2)) / (2. * s3 * t1 * u7) +
       Power(s5, 2) / (4. * s4 * t1 * u7) - (m2 * Power(s5, 2)) / (s3 * s4 * t1 * u7) +
       (s * Power(s5, 2)) / (s3 * s4 * t1 * u7) - (3 * s * s3) / (2. * Power(tp, 2) * u7) -
       (s3 * s4) / (2. * Power(tp, 2) * u7) + Power(s4, 2) / (2. * Power(tp, 2) * u7) -
       (s * t1) / (2. * Power(tp, 2) * u7) - (3 * s4 * t1) / (2. * Power(tp, 2) * u7) + (10 * m2) / (tp * u7) -
       (3 * s) / (2. * tp * u7) - (3 * Power(m2, 2)) / (s3 * tp * u7) + (m2 * s) / (s3 * tp * u7) +
       (2 * s3) / (tp * u7) - (3 * m2 * s3) / (s * tp * u7) - (3 * Power(m2, 2)) / (s4 * tp * u7) -
       (m2 * s) / (s4 * tp * u7) + (5 * m2 * s3) / (4. * s4 * tp * u7) - s4 / (2. * tp * u7) -
       (3 * m2 * s4) / (s * tp * u7) + (13 * m2 * s4) / (4. * s3 * tp * u7) - Power(s4, 2) / (4. * s3 * tp * u7) -
       (9 * s5) / (4. * tp * u7) + (5 * m2 * s5) / (2. * s3 * tp * u7) + (m2 * s5) / (s4 * tp * u7) -
       (3 * s4 * s5) / (s * tp * u7) - (5 * s4 * s5) / (4. * s3 * tp * u7) - (3 * Power(s5, 2)) / (4. * s3 * tp * u7) -
       (3 * Power(m2, 2)) / (t1 * tp * u7) - (3 * m2 * s) / (4. * t1 * tp * u7) - (3 * m2 * s3) / (t1 * tp * u7) +
       (s * s3) / (2. * t1 * tp * u7) + (Power(m2, 2) * s) / (s4 * t1 * tp * u7) -
       (3 * Power(m2, 2) * s3) / (s4 * t1 * tp * u7) - (5 * m2 * s * s3) / (4. * s4 * t1 * tp * u7) +
       (m2 * Power(s3, 2)) / (2. * s4 * t1 * tp * u7) + (2 * m2 * s4) / (t1 * tp * u7) + (m2 * s5) / (t1 * tp * u7) -
       (s * s5) / (2. * t1 * tp * u7) + (2 * s3 * s5) / (t1 * tp * u7) - (3 * m2 * s * s5) / (2. * s4 * t1 * tp * u7) +
       (m2 * s3 * s5) / (2. * s4 * t1 * tp * u7) + (s * s3 * s5) / (2. * s4 * t1 * tp * u7) -
       (s4 * s5) / (4. * t1 * tp * u7) + (s * Power(s5, 2)) / (2. * s4 * t1 * tp * u7) - t1 / (4. * tp * u7) -
       (3 * m2 * t1) / (2. * s * tp * u7) - (m2 * t1) / (s4 * tp * u7) - (3 * s4 * t1) / (2. * s * tp * u7) +
       (7 * s4 * t1) / (4. * s3 * tp * u7) + (11 * s5 * t1) / (4. * s3 * tp * u7) - (4 * m2 * tp) / (s3 * t1 * u7) +
       (3 * s5 * tp) / (s3 * t1 * u7) - (3 * m2 * s5 * tp) / (2. * s3 * s4 * t1 * u7) +
       (Power(s5, 2) * tp) / (2. * s3 * s4 * t1 * u7) - (3 * Power(m2, 2)) / (s3 * u1 * u7) -
       (3 * Power(m2, 2)) / (s4 * u1 * u7) - (8 * Power(m2, 3)) / (s3 * s4 * u1 * u7) +
       (5 * m2 * s5) / (2. * s3 * u1 * u7) + (5 * m2 * s5) / (2. * s4 * u1 * u7) +
       (4 * Power(m2, 2) * s5) / (s3 * s4 * u1 * u7) - Power(s5, 2) / (2. * s3 * u1 * u7) -
       Power(s5, 2) / (2. * s4 * u1 * u7) + (2 * m2 * Power(s5, 2)) / (s3 * s4 * u1 * u7) -
       Power(s5, 3) / (s3 * s4 * u1 * u7) - (3 * Power(m2, 2)) / (t1 * u1 * u7) + (5 * m2 * s5) / (2. * t1 * u1 * u7) -
       Power(s5, 2) / (2. * t1 * u1 * u7) + (m2 * Power(s, 2)) / (Power(tp, 2) * u1 * u7) +
       (3 * m2 * s * s3) / (Power(tp, 2) * u1 * u7) + (3 * m2 * s * s4) / (Power(tp, 2) * u1 * u7) +
       (2 * m2 * s3 * s4) / (Power(tp, 2) * u1 * u7) - (3 * s * s3 * s5) / (2. * Power(tp, 2) * u1 * u7) -
       (3 * s * s4 * s5) / (2. * Power(tp, 2) * u1 * u7) - (s3 * s4 * s5) / (Power(tp, 2) * u1 * u7) +
       (m2 * s * t1) / (Power(tp, 2) * u1 * u7) + (6 * m2 * s4 * t1) / (Power(tp, 2) * u1 * u7) -
       (s * s5 * t1) / (2. * Power(tp, 2) * u1 * u7) - (3 * s4 * s5 * t1) / (Power(tp, 2) * u1 * u7) +
       (12 * Power(m2, 2)) / (tp * u1 * u7) - (m2 * s) / (2. * tp * u1 * u7) + (m2 * s3) / (tp * u1 * u7) -
       (Power(m2, 2) * s3) / (s4 * tp * u1 * u7) - (5 * m2 * s * s3) / (4. * s4 * tp * u1 * u7) +
       (m2 * s4) / (tp * u1 * u7) - (Power(m2, 2) * s4) / (s3 * tp * u1 * u7) -
       (5 * m2 * s * s4) / (4. * s3 * tp * u1 * u7) - (8 * m2 * s5) / (tp * u1 * u7) - (s * s5) / (2. * tp * u1 * u7) -
       (m2 * s * s5) / (2. * s3 * tp * u1 * u7) - (s3 * s5) / (2. * tp * u1 * u7) -
       (m2 * s * s5) / (2. * s4 * tp * u1 * u7) + (m2 * s3 * s5) / (2. * s4 * tp * u1 * u7) +
       (s * s3 * s5) / (4. * s4 * tp * u1 * u7) - (s4 * s5) / (2. * tp * u1 * u7) +
       (m2 * s4 * s5) / (2. * s3 * tp * u1 * u7) + (s * s4 * s5) / (4. * s3 * tp * u1 * u7) +
       Power(s5, 2) / (tp * u1 * u7) + (s * Power(s5, 2)) / (4. * s3 * tp * u1 * u7) +
       (s * Power(s5, 2)) / (4. * s4 * tp * u1 * u7) - (3 * Power(m2, 2) * s) / (t1 * tp * u1 * u7) -
       (m2 * Power(s, 2)) / (2. * t1 * tp * u1 * u7) - (2 * Power(m2, 2) * s3) / (t1 * tp * u1 * u7) +
       (m2 * s * s3) / (4. * t1 * tp * u1 * u7) - (2 * Power(m2, 2) * s4) / (t1 * tp * u1 * u7) +
       (7 * m2 * s * s4) / (4. * t1 * tp * u1 * u7) - (m2 * s * s5) / (t1 * tp * u1 * u7) -
       (m2 * s3 * s5) / (t1 * tp * u1 * u7) + (s * s3 * s5) / (4. * t1 * tp * u1 * u7) +
       (m2 * s4 * s5) / (t1 * tp * u1 * u7) - (s * s4 * s5) / (2. * t1 * tp * u1 * u7) +
       (s * Power(s5, 2)) / (2. * t1 * tp * u1 * u7) + (s3 * Power(s5, 2)) / (t1 * tp * u1 * u7) +
       (m2 * t1) / (tp * u1 * u7) - (2 * Power(m2, 2) * t1) / (s3 * tp * u1 * u7) -
       (2 * Power(m2, 2) * t1) / (s4 * tp * u1 * u7) - (m2 * s4 * t1) / (s3 * tp * u1 * u7) -
       (s5 * t1) / (2. * tp * u1 * u7) - (m2 * s5 * t1) / (s3 * tp * u1 * u7) + (m2 * s5 * t1) / (s4 * tp * u1 * u7) +
       (s4 * s5 * t1) / (2. * s3 * tp * u1 * u7) + (Power(s5, 2) * t1) / (s3 * tp * u1 * u7) +
       (3 * u1) / (4. * s * u7) + (4 * u1) / (s3 * u7) - (33 * m2 * u1) / (4. * s * s3 * u7) -
       (9 * m2 * u1) / (4. * s * s4 * u7) + (3 * s4 * u1) / (4. * s * s3 * u7) - (3 * s5 * u1) / (4. * s * s3 * u7) +
       (5 * u1) / (2. * t1 * u7) - (3 * m2 * u1) / (s * t1 * u7) - (3 * m2 * u1) / (s3 * t1 * u7) -
       (6 * Power(m2, 2) * u1) / (s * s3 * t1 * u7) - (7 * m2 * u1) / (4. * s4 * t1 * u7) -
       (2 * Power(m2, 2) * u1) / (s3 * s4 * t1 * u7) + (3 * m2 * s4 * u1) / (s * s3 * t1 * u7) +
       (3 * s5 * u1) / (2. * s * t1 * u7) + (2 * s5 * u1) / (s3 * t1 * u7) + (3 * m2 * s5 * u1) / (s * s3 * t1 * u7) -
       (s5 * u1) / (2. * s4 * t1 * u7) + (m2 * s5 * u1) / (s3 * s4 * t1 * u7) -
       (3 * s4 * s5 * u1) / (2. * s * s3 * t1 * u7) + (11 * u1) / (4. * tp * u7) - (3 * m2 * u1) / (2. * s * tp * u7) -
       (3 * m2 * u1) / (2. * s3 * tp * u7) - (m2 * u1) / (s4 * tp * u7) - (3 * s4 * u1) / (4. * s * tp * u7) +
       (s4 * u1) / (s3 * tp * u7) - (3 * m2 * s4 * u1) / (2. * s * s3 * tp * u7) +
       (3 * Power(s4, 2) * u1) / (4. * s * s3 * tp * u7) + (s5 * u1) / (2. * s3 * tp * u7) -
       (3 * s4 * s5 * u1) / (4. * s * s3 * tp * u7) - (3 * m2 * u1) / (2. * t1 * tp * u7) + (s3 * u1) / (t1 * tp * u7) -
       (2 * m2 * s3 * u1) / (s4 * t1 * tp * u7) + (s5 * u1) / (2. * t1 * tp * u7) +
       (7 * t1 * u1) / (4. * s3 * tp * u7) - (3 * m2 * t1 * u1) / (s * s3 * tp * u7) -
       (9 * m2 * tp * u1) / (2. * s * s3 * s4 * u7) + (tp * u1) / (s3 * t1 * u7) -
       (3 * m2 * tp * u1) / (2. * s * s3 * t1 * u7) - (2 * m2 * tp * u1) / (s3 * s4 * t1 * u7) -
       (3 * s5 * tp * u1) / (2. * s * s3 * t1 * u7) - (s5 * tp * u1) / (s3 * s4 * t1 * u7) -
       (3 * Power(u1, 2)) / (4. * s * s3 * u7) - (3 * tp * Power(u1, 2)) / (2. * s * s3 * t1 * u7) -
       (3 * m2 * tp * Power(u1, 2)) / (2. * s * s3 * s4 * t1 * u7) + (17 * m2) / (4. * u6 * u7) -
       (4 * Power(m2, 2)) / (s3 * u6 * u7) + (m2 * s) / (s3 * u6 * u7) + (m2 * s4) / (s3 * u6 * u7) +
       s5 / (4. * u6 * u7) - (s * s5) / (2. * s3 * u6 * u7) - (3 * s4 * s5) / (4. * s3 * u6 * u7) +
       Power(s5, 2) / (4. * s3 * u6 * u7) - (6 * Power(m2, 2)) / (t1 * u6 * u7) + (m2 * s) / (t1 * u6 * u7) -
       (8 * Power(m2, 3)) / (s3 * t1 * u6 * u7) + (4 * Power(m2, 2) * s4) / (s3 * t1 * u6 * u7) +
       (5 * m2 * s * s4) / (2. * s3 * t1 * u6 * u7) + (2 * m2 * s5) / (t1 * u6 * u7) +
       (6 * Power(m2, 2) * s5) / (s3 * t1 * u6 * u7) + (3 * m2 * s * s5) / (s3 * t1 * u6 * u7) -
       (2 * m2 * s4 * s5) / (s3 * t1 * u6 * u7) - (s * s4 * s5) / (s3 * t1 * u6 * u7) +
       Power(s5, 2) / (2. * t1 * u6 * u7) - (m2 * Power(s5, 2)) / (s3 * t1 * u6 * u7) -
       (s * Power(s5, 2)) / (s3 * t1 * u6 * u7) + (m2 * t1) / (2. * s3 * u6 * u7) -
       (3 * Power(m2, 2)) / (tp * u6 * u7) + (5 * m2 * s) / (2. * tp * u6 * u7) -
       (Power(m2, 2) * s) / (s3 * tp * u6 * u7) - (m2 * s3) / (tp * u6 * u7) - (2 * m2 * s4) / (tp * u6 * u7) -
       (3 * Power(m2, 2) * s4) / (s3 * tp * u6 * u7) + (m2 * s * s4) / (s3 * tp * u6 * u7) +
       (3 * m2 * Power(s4, 2)) / (2. * s3 * tp * u6 * u7) + (m2 * s5) / (tp * u6 * u7) +
       (3 * m2 * s * s5) / (2. * s3 * tp * u6 * u7) - (3 * s4 * s5) / (4. * tp * u6 * u7) +
       (m2 * s4 * s5) / (2. * s3 * tp * u6 * u7) - (s * s4 * s5) / (2. * s3 * tp * u6 * u7) -
       (s * Power(s5, 2)) / (2. * s3 * tp * u6 * u7) + (7 * m2 * t1) / (2. * tp * u6 * u7) -
       (3 * Power(m2, 2) * t1) / (s3 * tp * u6 * u7) + (m2 * s * t1) / (2. * s3 * tp * u6 * u7) -
       (s4 * t1) / (2. * tp * u6 * u7) + (3 * s * s4 * t1) / (4. * s3 * tp * u6 * u7) +
       (Power(s4, 2) * t1) / (4. * s3 * tp * u6 * u7) + (m2 * s5 * t1) / (2. * s3 * tp * u6 * u7) +
       (s * s5 * t1) / (4. * s3 * tp * u6 * u7) - (s4 * s5 * t1) / (4. * s3 * tp * u6 * u7) +
       (m2 * Power(t1, 2)) / (2. * s3 * tp * u6 * u7) - (3 * m2 * s5 * tp) / (2. * s3 * t1 * u6 * u7) +
       (Power(s5, 2) * tp) / (2. * s3 * t1 * u6 * u7) - (3 * Power(m2, 2)) / (u1 * u6 * u7) +
       (5 * m2 * s5) / (2. * u1 * u6 * u7) - Power(s5, 2) / (2. * u1 * u6 * u7) -
       (8 * Power(m2, 3)) / (t1 * u1 * u6 * u7) - (8 * Power(m2, 2) * s) / (t1 * u1 * u6 * u7) -
       (m2 * Power(s, 2)) / (t1 * u1 * u6 * u7) + (4 * Power(m2, 2) * s5) / (t1 * u1 * u6 * u7) +
       (m2 * s * s5) / (t1 * u1 * u6 * u7) + (2 * m2 * Power(s5, 2)) / (t1 * u1 * u6 * u7) -
       Power(s5, 3) / (t1 * u1 * u6 * u7) - (3 * Power(m2, 2) * s) / (tp * u1 * u6 * u7) -
       (m2 * Power(s, 2)) / (2. * tp * u1 * u6 * u7) - (2 * Power(m2, 2) * s3) / (tp * u1 * u6 * u7) +
       (7 * m2 * s * s3) / (4. * tp * u1 * u6 * u7) - (2 * Power(m2, 2) * s4) / (tp * u1 * u6 * u7) +
       (m2 * s * s4) / (4. * tp * u1 * u6 * u7) - (m2 * s * s5) / (tp * u1 * u6 * u7) +
       (m2 * s3 * s5) / (tp * u1 * u6 * u7) - (s * s3 * s5) / (2. * tp * u1 * u6 * u7) -
       (m2 * s4 * s5) / (tp * u1 * u6 * u7) + (s * s4 * s5) / (4. * tp * u1 * u6 * u7) +
       (s * Power(s5, 2)) / (2. * tp * u1 * u6 * u7) + (s4 * Power(s5, 2)) / (tp * u1 * u6 * u7) -
       (Power(m2, 2) * t1) / (tp * u1 * u6 * u7) - (m2 * s * t1) / (2. * tp * u1 * u6 * u7) -
       (m2 * s4 * t1) / (tp * u1 * u6 * u7) + (m2 * s5 * t1) / (2. * tp * u1 * u6 * u7) +
       (s * s5 * t1) / (4. * tp * u1 * u6 * u7) + (s4 * s5 * t1) / (2. * tp * u1 * u6 * u7) -
       (4 * m2 * u1) / (s3 * u6 * u7) - (s4 * u1) / (s3 * u6 * u7) + (s5 * u1) / (4. * s3 * u6 * u7) -
       (2 * Power(m2, 2) * u1) / (s3 * t1 * u6 * u7) + (2 * m2 * s4 * u1) / (s3 * t1 * u6 * u7) +
       (m2 * s5 * u1) / (s3 * t1 * u6 * u7) - (s4 * s5 * u1) / (s3 * t1 * u6 * u7) - (m2 * u1) / (tp * u6 * u7) +
       (Power(s4, 2) * u1) / (2. * s3 * tp * u6 * u7) - (s4 * s5 * u1) / (2. * s3 * tp * u6 * u7) -
       (2 * m2 * t1 * u1) / (s3 * tp * u6 * u7) - (3 * s4 * t1 * u1) / (4. * s3 * tp * u6 * u7) -
       (2 * m2 * tp * u1) / (s3 * t1 * u6 * u7) + (s5 * tp * u1) / (2. * s3 * t1 * u6 * u7) -
       (3 * m2 * u6) / (2. * s * s3 * u7) - (9 * m2 * u6) / (2. * s * s4 * u7) -
       (12 * Power(m2, 2) * u6) / (s * s3 * s4 * u7) + (21 * s5 * u6) / (2. * s * s3 * u7) +
       (3 * s5 * u6) / (2. * s * s4 * u7) + (3 * Power(s5, 2) * u6) / (s * s3 * s4 * u7) -
       (3 * m2 * u6) / (2. * s * t1 * u7) - (15 * m2 * u6) / (2. * s3 * t1 * u7) +
       (24 * Power(m2, 2) * u6) / (s * s3 * t1 * u7) - (m2 * u6) / (2. * s4 * t1 * u7) -
       (2 * Power(m2, 2) * u6) / (s3 * s4 * t1 * u7) - (6 * m2 * s4 * u6) / (s * s3 * t1 * u7) +
       (21 * s5 * u6) / (2. * s * t1 * u7) + (3 * s5 * u6) / (2. * s3 * t1 * u7) -
       (6 * m2 * s5 * u6) / (s * s3 * t1 * u7) + (3 * s5 * u6) / (4. * s4 * t1 * u7) -
       (2 * m2 * s5 * u6) / (s3 * s4 * t1 * u7) + (3 * Power(s5, 2) * u6) / (2. * s3 * s4 * t1 * u7) -
       (3 * s3 * u6) / (2. * Power(tp, 2) * u7) + (3 * s4 * u6) / (Power(tp, 2) * u7) -
       (t1 * u6) / (2. * Power(tp, 2) * u7) - (2 * u6) / (tp * u7) + (5 * m2 * u6) / (s3 * tp * u7) +
       (3 * s3 * u6) / (2. * s * tp * u7) - (2 * m2 * u6) / (s4 * tp * u7) - (5 * s3 * u6) / (4. * s4 * tp * u7) -
       (3 * m2 * s3 * u6) / (2. * s * s4 * tp * u7) - (3 * s4 * u6) / (2. * s * tp * u7) +
       (s4 * u6) / (4. * s3 * tp * u7) + (3 * m2 * s4 * u6) / (2. * s * s3 * tp * u7) -
       (s5 * u6) / (4. * s3 * tp * u7) - (3 * s5 * u6) / (2. * s4 * tp * u7) + (m2 * u6) / (t1 * tp * u7) +
       (s3 * u6) / (t1 * tp * u7) + (3 * m2 * s3 * u6) / (s * t1 * tp * u7) -
       (3 * Power(m2, 2) * u6) / (s4 * t1 * tp * u7) - (m2 * s * u6) / (2. * s4 * t1 * tp * u7) -
       (s * s3 * u6) / (2. * s4 * t1 * tp * u7) + (s4 * u6) / (4. * t1 * tp * u7) +
       (3 * m2 * s4 * u6) / (s * t1 * tp * u7) - (5 * s5 * u6) / (4. * t1 * tp * u7) +
       (3 * s3 * s5 * u6) / (s * t1 * tp * u7) - (m2 * s5 * u6) / (s4 * t1 * tp * u7) -
       (s * s5 * u6) / (2. * s4 * t1 * tp * u7) + (s3 * s5 * u6) / (2. * s4 * t1 * tp * u7) +
       (3 * Power(s5, 2) * u6) / (4. * s4 * t1 * tp * u7) + (3 * t1 * u6) / (2. * s * tp * u7) +
       (3 * m2 * t1 * u6) / (s * s3 * tp * u7) - (3 * m2 * t1 * u6) / (s * s4 * tp * u7) +
       (3 * s4 * t1 * u6) / (2. * s * s3 * tp * u7) + (3 * s5 * t1 * u6) / (s * s3 * tp * u7) -
       (6 * m2 * tp * u6) / (s * s3 * t1 * u7) + (6 * s5 * tp * u6) / (s * s3 * t1 * u7) +
       (m2 * s * u6) / (Power(tp, 2) * u1 * u7) + (6 * m2 * s3 * u6) / (Power(tp, 2) * u1 * u7) -
       (s * s5 * u6) / (2. * Power(tp, 2) * u1 * u7) - (3 * s3 * s5 * u6) / (Power(tp, 2) * u1 * u7) +
       (2 * m2 * t1 * u6) / (Power(tp, 2) * u1 * u7) - (s5 * t1 * u6) / (Power(tp, 2) * u1 * u7) +
       (m2 * u6) / (tp * u1 * u7) - (2 * Power(m2, 2) * u6) / (s3 * tp * u1 * u7) -
       (2 * Power(m2, 2) * u6) / (s4 * tp * u1 * u7) - (m2 * s3 * u6) / (s4 * tp * u1 * u7) -
       (s5 * u6) / (2. * tp * u1 * u7) + (m2 * s5 * u6) / (s3 * tp * u1 * u7) - (m2 * s5 * u6) / (s4 * tp * u1 * u7) +
       (s3 * s5 * u6) / (2. * s4 * tp * u1 * u7) + (Power(s5, 2) * u6) / (s4 * tp * u1 * u7) -
       (Power(m2, 2) * u6) / (t1 * tp * u1 * u7) - (m2 * s * u6) / (2. * t1 * tp * u1 * u7) -
       (m2 * s3 * u6) / (t1 * tp * u1 * u7) + (m2 * s5 * u6) / (2. * t1 * tp * u1 * u7) +
       (s * s5 * u6) / (4. * t1 * tp * u1 * u7) + (s3 * s5 * u6) / (2. * t1 * tp * u1 * u7) +
       (27 * u1 * u6) / (4. * s * s3 * u7) + (3 * u1 * u6) / (4. * s * s4 * u7) -
       (3 * m2 * u1 * u6) / (s * s3 * s4 * u7) + (3 * s5 * u1 * u6) / (2. * s * s3 * s4 * u7) +
       (27 * u1 * u6) / (4. * s * t1 * u7) - (3 * m2 * u1 * u6) / (s * s3 * t1 * u7) + (u1 * u6) / (2. * s4 * t1 * u7) -
       (6 * m2 * u1 * u6) / (s * s4 * t1 * u7) + (2 * m2 * u1 * u6) / (s3 * s4 * t1 * u7) -
       (6 * Power(m2, 2) * u1 * u6) / (s * s3 * s4 * t1 * u7) + (3 * s5 * u1 * u6) / (s * s3 * t1 * u7) -
       (3 * s5 * u1 * u6) / (4. * s * s4 * t1 * u7) - (s5 * u1 * u6) / (s3 * s4 * t1 * u7) +
       (3 * m2 * s5 * u1 * u6) / (s * s3 * s4 * t1 * u7) + (6 * u1 * u6) / (s * tp * u7) -
       (3 * m2 * u1 * u6) / (s * s3 * tp * u7) - (3 * m2 * u1 * u6) / (2. * s * s4 * tp * u7) +
       (3 * s4 * u1 * u6) / (2. * s * s3 * tp * u7) + (3 * s5 * u1 * u6) / (4. * s * s3 * tp * u7) +
       (u1 * u6) / (t1 * tp * u7) - (3 * m2 * u1 * u6) / (s * t1 * tp * u7) +
       (9 * s3 * u1 * u6) / (4. * s * t1 * tp * u7) - (3 * m2 * s3 * u1 * u6) / (s * s4 * t1 * tp * u7) +
       (3 * s5 * u1 * u6) / (4. * s * t1 * tp * u7) - (s5 * u1 * u6) / (2. * s4 * t1 * tp * u7) +
       (9 * t1 * u1 * u6) / (4. * s * s3 * tp * u7) + (3 * tp * u1 * u6) / (s * s3 * t1 * u7) -
       (3 * m2 * tp * u1 * u6) / (2. * s * s3 * s4 * t1 * u7) - (3 * s5 * tp * u1 * u6) / (2. * s * s3 * s4 * t1 * u7) -
       (6 * m2 * Power(u6, 2)) / (s * s3 * t1 * u7) + Power(u6, 2) / (2. * Power(tp, 2) * u7) -
       (3 * Power(u6, 2)) / (2. * s * tp * u7) + (3 * m2 * Power(u6, 2)) / (s * s3 * tp * u7) -
       (3 * m2 * Power(u6, 2)) / (s * s4 * tp * u7) - (3 * s3 * Power(u6, 2)) / (2. * s * s4 * tp * u7) -
       (3 * s5 * Power(u6, 2)) / (s * s4 * tp * u7) - Power(u6, 2) / (4. * t1 * tp * u7) +
       (3 * m2 * Power(u6, 2)) / (2. * s * t1 * tp * u7) + (3 * s3 * Power(u6, 2)) / (2. * s * t1 * tp * u7) -
       (3 * m2 * Power(u6, 2)) / (2. * s4 * t1 * tp * u7) - (s3 * Power(u6, 2)) / (2. * s4 * t1 * tp * u7) -
       (3 * s5 * Power(u6, 2)) / (4. * s4 * t1 * tp * u7) + (3 * u1 * Power(u6, 2)) / (4. * s * s4 * t1 * u7) +
       (3 * m2 * u1 * Power(u6, 2)) / (s * s3 * s4 * t1 * u7) -
       (3 * s5 * u1 * Power(u6, 2)) / (2. * s * s3 * s4 * t1 * u7) - (3 * u1 * Power(u6, 2)) / (4. * s * s4 * tp * u7) +
       (3 * u1 * Power(u6, 2)) / (2. * s * t1 * tp * u7) + (u1 * Power(u6, 2)) / (2. * s4 * t1 * tp * u7) -
       (3 * m2 * u1 * Power(u6, 2)) / (2. * s * s4 * t1 * tp * u7) -
       (3 * s5 * u1 * Power(u6, 2)) / (4. * s * s4 * t1 * tp * u7) +
       (3 * u1 * Power(u6, 3)) / (4. * s * s4 * t1 * tp * u7) + (3 * u7) / (4. * s * s4) -
       (3 * m2 * u7) / (s * s3 * s4) + (3 * s5 * u7) / (2. * s * s3 * s4) - (15 * m2 * u7) / (2. * s * s4 * t1) +
       (m2 * u7) / (s3 * s4 * t1) - (3 * s3 * u7) / (4. * s * s4 * t1) + (15 * s5 * u7) / (4. * s * s4 * t1) -
       (s5 * u7) / (s3 * s4 * t1) + (3 * u7) / (4. * s * tp) - (3 * s3 * u7) / (2. * s * s4 * tp) +
       (3 * t1 * u7) / (4. * s * s3 * tp) - (3 * t1 * u7) / (4. * s * s4 * tp) + (3 * tp * u7) / (4. * s * s4 * t1) +
       (3 * m2 * tp * u7) / (2. * s * s3 * s4 * t1) + (3 * s5 * tp * u7) / (2. * s * s3 * s4 * t1) -
       (3 * m2 * u7) / (s4 * Power(u1, 2)) - (m2 * u7) / (tp * Power(u1, 2)) + (3 * u7) / (4. * s * u1) -
       (9 * m2 * u7) / (4. * s * s3 * u1) + (4 * u7) / (s4 * u1) - (33 * m2 * u7) / (4. * s * s4 * u1) +
       (3 * s3 * u7) / (4. * s * s4 * u1) - (3 * s5 * u7) / (4. * s * s4 * u1) - (4 * m2 * u7) / (s4 * t1 * u1) -
       (s3 * u7) / (s4 * t1 * u1) + (s5 * u7) / (4. * s4 * t1 * u1) + (3 * t1 * u7) / (4. * s * s3 * u1) +
       (27 * t1 * u7) / (4. * s * s4 * u1) - (3 * m2 * t1 * u7) / (s * s3 * s4 * u1) +
       (3 * s5 * t1 * u7) / (2. * s * s3 * s4 * u1) + (11 * u7) / (4. * tp * u1) - (3 * m2 * u7) / (2. * s * tp * u1) -
       (m2 * u7) / (s3 * tp * u1) - (3 * s3 * u7) / (4. * s * tp * u1) - (3 * m2 * u7) / (2. * s4 * tp * u1) +
       (s3 * u7) / (s4 * tp * u1) - (3 * m2 * s3 * u7) / (2. * s * s4 * tp * u1) +
       (3 * Power(s3, 2) * u7) / (4. * s * s4 * tp * u1) + (s5 * u7) / (2. * s4 * tp * u1) -
       (3 * s3 * s5 * u7) / (4. * s * s4 * tp * u1) - (m2 * u7) / (t1 * tp * u1) +
       (Power(s3, 2) * u7) / (2. * s4 * t1 * tp * u1) - (s3 * s5 * u7) / (2. * s4 * t1 * tp * u1) +
       (6 * t1 * u7) / (s * tp * u1) - (3 * m2 * t1 * u7) / (2. * s * s3 * tp * u1) -
       (3 * m2 * t1 * u7) / (s * s4 * tp * u1) + (3 * s3 * t1 * u7) / (2. * s * s4 * tp * u1) +
       (3 * s5 * t1 * u7) / (4. * s * s4 * tp * u1) - (3 * Power(t1, 2) * u7) / (4. * s * s3 * tp * u1) -
       (9 * m2 * tp * u7) / (2. * s * s3 * s4 * u1) - (3 * u7) / (4. * s * u6) + (9 * m2 * u7) / (2. * s * s3 * u6) +
       (3 * m2 * u7) / (s * s4 * u6) - (m2 * u7) / (s3 * s4 * u6) - (12 * Power(m2, 2) * u7) / (s * s3 * s4 * u6) -
       (9 * s5 * u7) / (4. * s * s3 * u6) - (3 * s5 * u7) / (2. * s * s4 * u6) + (s5 * u7) / (s3 * s4 * u6) +
       (12 * m2 * s5 * u7) / (s * s3 * s4 * u6) - (3 * Power(s5, 2) * u7) / (s * s3 * s4 * u6) +
       (m2 * u7) / (s3 * t1 * u6) - (m2 * u7) / (s4 * t1 * u6) - (6 * Power(m2, 2) * u7) / (s3 * s4 * t1 * u6) -
       (s5 * u7) / (2. * s3 * t1 * u6) + (s5 * u7) / (2. * s4 * t1 * u6) + (6 * m2 * s5 * u7) / (s3 * s4 * t1 * u6) -
       (3 * Power(s5, 2) * u7) / (2. * s3 * s4 * t1 * u6) - (3 * t1 * u7) / (2. * s * s3 * u6) +
       (3 * m2 * t1 * u7) / (s * s3 * s4 * u6) - (3 * s5 * t1 * u7) / (2. * s * s3 * s4 * u6) -
       (3 * t1 * u7) / (4. * s * tp * u6) + (3 * s4 * t1 * u7) / (2. * s * s3 * tp * u6) -
       (3 * Power(t1, 2) * u7) / (2. * s * s3 * tp * u6) - (3 * tp * u7) / (2. * s * s3 * u6) +
       (3 * tp * u7) / (2. * s * s4 * u6) + (3 * m2 * tp * u7) / (s * s3 * s4 * u6) -
       (3 * s5 * tp * u7) / (s * s3 * s4 * u6) - (3 * m2 * tp * u7) / (s * s4 * t1 * u6) -
       (m2 * tp * u7) / (2. * s3 * s4 * t1 * u6) - (6 * Power(m2, 2) * tp * u7) / (s * s3 * s4 * t1 * u6) +
       (3 * s5 * tp * u7) / (2. * s * s4 * t1 * u6) + (6 * m2 * s5 * tp * u7) / (s * s3 * s4 * t1 * u6) -
       (3 * Power(s5, 2) * tp * u7) / (2. * s * s3 * s4 * t1 * u6) -
       (3 * m2 * Power(tp, 2) * u7) / (2. * s * s3 * s4 * t1 * u6) - (3 * m2 * u7) / (Power(u1, 2) * u6) +
       (2 * Power(m2, 2) * u7) / (s4 * Power(u1, 2) * u6) - (2 * m2 * s4 * u7) / (tp * Power(u1, 2) * u6) -
       (2 * m2 * tp * u7) / (s4 * Power(u1, 2) * u6) + (5 * u7) / (2. * u1 * u6) - (3 * m2 * u7) / (s * u1 * u6) -
       (7 * m2 * u7) / (4. * s3 * u1 * u6) - (3 * m2 * u7) / (s4 * u1 * u6) -
       (6 * Power(m2, 2) * u7) / (s * s4 * u1 * u6) - (2 * Power(m2, 2) * u7) / (s3 * s4 * u1 * u6) +
       (3 * m2 * s3 * u7) / (s * s4 * u1 * u6) + (3 * s5 * u7) / (2. * s * u1 * u6) - (s5 * u7) / (2. * s3 * u1 * u6) +
       (2 * s5 * u7) / (s4 * u1 * u6) + (3 * m2 * s5 * u7) / (s * s4 * u1 * u6) + (m2 * s5 * u7) / (s3 * s4 * u1 * u6) -
       (3 * s3 * s5 * u7) / (2. * s * s4 * u1 * u6) - (2 * Power(m2, 2) * u7) / (s4 * t1 * u1 * u6) +
       (2 * m2 * s3 * u7) / (s4 * t1 * u1 * u6) + (m2 * s5 * u7) / (s4 * t1 * u1 * u6) -
       (s3 * s5 * u7) / (s4 * t1 * u1 * u6) + (27 * t1 * u7) / (4. * s * u1 * u6) + (t1 * u7) / (2. * s3 * u1 * u6) -
       (6 * m2 * t1 * u7) / (s * s3 * u1 * u6) - (3 * m2 * t1 * u7) / (s * s4 * u1 * u6) +
       (2 * m2 * t1 * u7) / (s3 * s4 * u1 * u6) - (6 * Power(m2, 2) * t1 * u7) / (s * s3 * s4 * u1 * u6) -
       (3 * s5 * t1 * u7) / (4. * s * s3 * u1 * u6) + (3 * s5 * t1 * u7) / (s * s4 * u1 * u6) -
       (s5 * t1 * u7) / (s3 * s4 * u1 * u6) + (3 * m2 * s5 * t1 * u7) / (s * s3 * s4 * u1 * u6) +
       (3 * Power(t1, 2) * u7) / (4. * s * s3 * u1 * u6) + (3 * m2 * Power(t1, 2) * u7) / (s * s3 * s4 * u1 * u6) -
       (3 * s5 * Power(t1, 2) * u7) / (2. * s * s3 * s4 * u1 * u6) - (3 * m2 * u7) / (2. * tp * u1 * u6) +
       (s4 * u7) / (tp * u1 * u6) - (2 * m2 * s4 * u7) / (s3 * tp * u1 * u6) + (s5 * u7) / (2. * tp * u1 * u6) +
       (t1 * u7) / (tp * u1 * u6) - (3 * m2 * t1 * u7) / (s * tp * u1 * u6) +
       (9 * s4 * t1 * u7) / (4. * s * tp * u1 * u6) - (3 * m2 * s4 * t1 * u7) / (s * s3 * tp * u1 * u6) +
       (3 * s5 * t1 * u7) / (4. * s * tp * u1 * u6) - (s5 * t1 * u7) / (2. * s3 * tp * u1 * u6) +
       (3 * Power(t1, 2) * u7) / (2. * s * tp * u1 * u6) + (Power(t1, 2) * u7) / (2. * s3 * tp * u1 * u6) -
       (3 * m2 * Power(t1, 2) * u7) / (2. * s * s3 * tp * u1 * u6) -
       (3 * s5 * Power(t1, 2) * u7) / (4. * s * s3 * tp * u1 * u6) +
       (3 * Power(t1, 3) * u7) / (4. * s * s3 * tp * u1 * u6) + (tp * u7) / (s4 * u1 * u6) -
       (3 * m2 * tp * u7) / (2. * s * s4 * u1 * u6) - (2 * m2 * tp * u7) / (s3 * s4 * u1 * u6) -
       (3 * s5 * tp * u7) / (2. * s * s4 * u1 * u6) - (s5 * tp * u7) / (s3 * s4 * u1 * u6) -
       (2 * m2 * tp * u7) / (s4 * t1 * u1 * u6) + (s5 * tp * u7) / (2. * s4 * t1 * u1 * u6) +
       (3 * t1 * tp * u7) / (s * s4 * u1 * u6) - (3 * m2 * t1 * tp * u7) / (2. * s * s3 * s4 * u1 * u6) -
       (3 * s5 * t1 * tp * u7) / (2. * s * s3 * s4 * u1 * u6) + (3 * u6 * u7) / (4. * s * s4 * t1) +
       (3 * u6 * u7) / (2. * s * s4 * tp) - (2 * m2 * u6 * u7) / (s4 * tp * Power(u1, 2)) +
       (7 * u6 * u7) / (4. * s4 * tp * u1) - (3 * m2 * u6 * u7) / (s * s4 * tp * u1) -
       (2 * m2 * u6 * u7) / (s4 * t1 * tp * u1) - (3 * s3 * u6 * u7) / (4. * s4 * t1 * tp * u1) +
       (9 * t1 * u6 * u7) / (4. * s * s4 * tp * u1) - (3 * Power(u7, 2)) / (4. * s * s4 * u1) -
       (3 * tp * Power(u7, 2)) / (2. * s * s4 * u1 * u6) - (3 * m2 * tp * Power(u7, 2)) / (2. * s * s3 * s4 * u1 * u6) -
       (6 * m2 * up) / (s * s3 * s4) + (6 * s5 * up) / (s * s3 * s4) + (9 * m2 * up) / (4. * s * s4 * t1) +
       (m2 * up) / (s3 * s4 * t1) - (6 * Power(m2, 2) * up) / (s * s3 * s4 * t1) - (3 * s5 * up) / (2. * s * s4 * t1) +
       (6 * m2 * s5 * up) / (s * s3 * s4 * t1) - (3 * Power(s5, 2) * up) / (2. * s * s3 * s4 * t1) +
       (3 * up) / (2. * s * tp) - (3 * m2 * up) / (2. * s * s3 * tp) - (3 * m2 * up) / (2. * s * s4 * tp) -
       (3 * s3 * up) / (4. * s * s4 * tp) - (3 * s4 * up) / (4. * s * s3 * tp) + (3 * s5 * up) / (4. * s * s3 * tp) +
       (3 * s5 * up) / (4. * s * s4 * tp) + (3 * t1 * up) / (4. * s * s3 * tp) - (3 * t1 * up) / (4. * s * s4 * tp) +
       (3 * m2 * tp * up) / (2. * s * s3 * s4 * t1) + (m2 * s4 * up) / (Power(tp, 2) * Power(u1, 2)) +
       (m2 * up) / (tp * Power(u1, 2)) - (Power(m2, 2) * up) / (s4 * tp * Power(u1, 2)) -
       (3 * m2 * up) / (2. * s * s4 * u1) + (4 * m2 * up) / (s3 * s4 * u1) + (3 * s5 * up) / (2. * s * s4 * u1) -
       (m2 * up) / (2. * s4 * t1 * u1) + (s5 * up) / (4. * s4 * t1 * u1) +
       (3 * s5 * t1 * up) / (2. * s * s3 * s4 * u1) - (s4 * up) / (2. * Power(tp, 2) * u1) +
       (13 * m2 * up) / (4. * s3 * tp * u1) - (3 * m2 * up) / (2. * s4 * tp * u1) -
       (3 * m2 * s3 * up) / (s * s4 * tp * u1) - (3 * s5 * up) / (4. * s * tp * u1) - (s5 * up) / (2. * s4 * tp * u1) -
       (3 * m2 * s5 * up) / (2. * s * s4 * tp * u1) - (3 * s3 * s5 * up) / (4. * s * s4 * tp * u1) +
       (3 * Power(s5, 2) * up) / (4. * s * s4 * tp * u1) - (m2 * up) / (t1 * tp * u1) +
       (Power(m2, 2) * up) / (s4 * t1 * tp * u1) - (m2 * s3 * up) / (2. * s4 * t1 * tp * u1) -
       (3 * m2 * s5 * up) / (2. * s4 * t1 * tp * u1) - (s3 * s5 * up) / (2. * s4 * t1 * tp * u1) +
       (Power(s5, 2) * up) / (2. * s4 * t1 * tp * u1) - (3 * t1 * up) / (4. * s * tp * u1) +
       (3 * t1 * up) / (2. * s3 * tp * u1) + (15 * m2 * t1 * up) / (4. * s * s3 * tp * u1) -
       (9 * m2 * t1 * up) / (4. * s * s4 * tp * u1) - (3 * s4 * t1 * up) / (4. * s * s3 * tp * u1) -
       (3 * s5 * t1 * up) / (4. * s * s3 * tp * u1) - (3 * s5 * t1 * up) / (4. * s * s4 * tp * u1) +
       (3 * Power(t1, 2) * up) / (4. * s * s3 * tp * u1) + (9 * m2 * up) / (4. * s * s3 * u6) +
       (m2 * up) / (s3 * s4 * u6) - (6 * Power(m2, 2) * up) / (s * s3 * s4 * u6) - (3 * s5 * up) / (2. * s * s3 * u6) +
       (6 * m2 * s5 * up) / (s * s3 * s4 * u6) - (3 * Power(s5, 2) * up) / (2. * s * s3 * s4 * u6) -
       (8 * Power(m2, 2) * up) / (s3 * s4 * t1 * u6) + (6 * m2 * s5 * up) / (s3 * s4 * t1 * u6) -
       (Power(s5, 2) * up) / (s3 * s4 * t1 * u6) - (3 * t1 * up) / (4. * s * s3 * u6) -
       (3 * m2 * t1 * up) / (2. * s * s3 * s4 * u6) - (3 * s5 * t1 * up) / (2. * s * s3 * s4 * u6) +
       (3 * m2 * t1 * up) / (2. * s * s3 * tp * u6) + (3 * s4 * t1 * up) / (4. * s * s3 * tp * u6) -
       (3 * s5 * t1 * up) / (4. * s * s3 * tp * u6) - (3 * Power(t1, 2) * up) / (4. * s * s3 * tp * u6) +
       (3 * m2 * tp * up) / (2. * s * s3 * s4 * u6) - (m2 * tp * up) / (s3 * s4 * t1 * u6) -
       (12 * Power(m2, 2) * tp * up) / (s * s3 * s4 * t1 * u6) + (6 * m2 * s5 * tp * up) / (s * s3 * s4 * t1 * u6) +
       (2 * Power(m2, 2) * up) / (s4 * Power(u1, 2) * u6) - (2 * Power(m2, 2) * up) / (tp * Power(u1, 2) * u6) -
       (m2 * up) / (2. * s3 * u1 * u6) - (9 * m2 * up) / (2. * s4 * u1 * u6) -
       (6 * Power(m2, 2) * up) / (s * s4 * u1 * u6) + (s5 * up) / (s3 * u1 * u6) + (s5 * up) / (s4 * u1 * u6) +
       (3 * m2 * s5 * up) / (s3 * s4 * u1 * u6) + (3 * Power(s5, 2) * up) / (2. * s * s4 * u1 * u6) -
       (Power(s5, 2) * up) / (s3 * s4 * u1 * u6) - (2 * m2 * s5 * up) / (s4 * t1 * u1 * u6) +
       (Power(s5, 2) * up) / (s4 * t1 * u1 * u6) + (3 * m2 * t1 * up) / (s * s3 * u1 * u6) -
       (9 * m2 * t1 * up) / (2. * s * s4 * u1 * u6) + (m2 * t1 * up) / (s3 * s4 * u1 * u6) +
       (6 * Power(m2, 2) * t1 * up) / (s * s3 * s4 * u1 * u6) + (3 * s5 * t1 * up) / (2. * s * s4 * u1 * u6) -
       (s5 * t1 * up) / (s3 * s4 * u1 * u6) + (3 * m2 * s5 * t1 * up) / (s * s3 * s4 * u1 * u6) -
       (3 * Power(s5, 2) * t1 * up) / (2. * s * s3 * s4 * u1 * u6) +
       (3 * m2 * Power(t1, 2) * up) / (2. * s * s3 * s4 * u1 * u6) -
       (3 * s5 * Power(t1, 2) * up) / (2. * s * s3 * s4 * u1 * u6) + (m2 * up) / (4. * tp * u1 * u6) -
       (Power(m2, 2) * up) / (s3 * tp * u1 * u6) + (5 * m2 * s4 * up) / (4. * s3 * tp * u1 * u6) +
       (3 * m2 * s5 * up) / (2. * s3 * tp * u1 * u6) + (s4 * s5 * up) / (4. * s3 * tp * u1 * u6) -
       (Power(s5, 2) * up) / (2. * s3 * tp * u1 * u6) + (3 * m2 * t1 * up) / (s * tp * u1 * u6) +
       (m2 * t1 * up) / (4. * s3 * tp * u1 * u6) + (3 * m2 * s4 * t1 * up) / (s * s3 * tp * u1 * u6) -
       (s5 * t1 * up) / (2. * s3 * tp * u1 * u6) + (3 * m2 * s5 * t1 * up) / (2. * s * s3 * tp * u1 * u6) +
       (3 * s4 * s5 * t1 * up) / (4. * s * s3 * tp * u1 * u6) -
       (3 * Power(s5, 2) * t1 * up) / (4. * s * s3 * tp * u1 * u6) +
       (3 * s4 * Power(t1, 2) * up) / (4. * s * s3 * tp * u1 * u6) -
       (3 * s5 * Power(t1, 2) * up) / (4. * s * s3 * tp * u1 * u6) - (3 * u6 * up) / (4. * s * s4 * t1) -
       (3 * m2 * u6 * up) / (2. * s * s3 * s4 * t1) - (3 * s5 * u6 * up) / (2. * s * s3 * s4 * t1) -
       (3 * u6 * up) / (4. * s * s3 * tp) + (3 * u6 * up) / (4. * s * s4 * tp) +
       (3 * m2 * u6 * up) / (2. * s * s4 * t1 * tp) + (3 * s3 * u6 * up) / (4. * s * s4 * t1 * tp) -
       (3 * s5 * u6 * up) / (4. * s * s4 * t1 * tp) + (3 * m2 * u6 * up) / (Power(tp, 2) * Power(u1, 2)) -
       (m2 * u6 * up) / (s4 * tp * Power(u1, 2)) + (9 * m2 * u6 * up) / (2. * s * s3 * s4 * u1) -
       (3 * u6 * up) / (2. * Power(tp, 2) * u1) - (3 * u6 * up) / (4. * s * tp * u1) +
       (9 * m2 * u6 * up) / (4. * s * s3 * tp * u1) - (u6 * up) / (4. * s4 * tp * u1) +
       (9 * m2 * u6 * up) / (4. * s * s4 * tp * u1) - (3 * s3 * u6 * up) / (4. * s * s4 * tp * u1) +
       (3 * s5 * u6 * up) / (4. * s * s4 * tp * u1) - (m2 * u6 * up) / (2. * s4 * t1 * tp * u1) +
       (s3 * u6 * up) / (4. * s4 * t1 * tp * u1) + (s5 * u6 * up) / (2. * s4 * t1 * tp * u1) +
       (3 * t1 * u6 * up) / (2. * s * s3 * tp * u1) - (3 * Power(u6, 2) * up) / (4. * s * s4 * t1 * tp) +
       (2 * Power(m2, 2) * up) / (s3 * t1 * Power(u7, 2)) + (m2 * s3 * up) / (Power(tp, 2) * Power(u7, 2)) +
       (3 * m2 * t1 * up) / (Power(tp, 2) * Power(u7, 2)) + (m2 * up) / (tp * Power(u7, 2)) -
       (Power(m2, 2) * up) / (s3 * tp * Power(u7, 2)) - (2 * Power(m2, 2) * up) / (t1 * tp * Power(u7, 2)) -
       (m2 * t1 * up) / (s3 * tp * Power(u7, 2)) - (3 * m2 * up) / (2. * s * s3 * u7) + (4 * m2 * up) / (s3 * s4 * u7) +
       (3 * s5 * up) / (2. * s * s3 * u7) - (9 * m2 * up) / (2. * s3 * t1 * u7) -
       (6 * Power(m2, 2) * up) / (s * s3 * t1 * u7) - (m2 * up) / (2. * s4 * t1 * u7) + (s5 * up) / (s3 * t1 * u7) +
       (s5 * up) / (s4 * t1 * u7) + (3 * m2 * s5 * up) / (s3 * s4 * t1 * u7) +
       (3 * Power(s5, 2) * up) / (2. * s * s3 * t1 * u7) - (Power(s5, 2) * up) / (s3 * s4 * t1 * u7) +
       (9 * m2 * t1 * up) / (2. * s * s3 * s4 * u7) - (s3 * up) / (2. * Power(tp, 2) * u7) -
       (3 * t1 * up) / (2. * Power(tp, 2) * u7) - (3 * m2 * up) / (2. * s3 * tp * u7) +
       (13 * m2 * up) / (4. * s4 * tp * u7) - (3 * m2 * s4 * up) / (s * s3 * tp * u7) -
       (3 * s5 * up) / (4. * s * tp * u7) - (s5 * up) / (2. * s3 * tp * u7) -
       (3 * m2 * s5 * up) / (2. * s * s3 * tp * u7) - (3 * s4 * s5 * up) / (4. * s * s3 * tp * u7) +
       (3 * Power(s5, 2) * up) / (4. * s * s3 * tp * u7) + (m2 * up) / (4. * t1 * tp * u7) -
       (Power(m2, 2) * up) / (s4 * t1 * tp * u7) + (5 * m2 * s3 * up) / (4. * s4 * t1 * tp * u7) +
       (3 * m2 * s5 * up) / (2. * s4 * t1 * tp * u7) + (s3 * s5 * up) / (4. * s4 * t1 * tp * u7) -
       (Power(s5, 2) * up) / (2. * s4 * t1 * tp * u7) - (3 * t1 * up) / (4. * s * tp * u7) -
       (t1 * up) / (4. * s3 * tp * u7) + (9 * m2 * t1 * up) / (4. * s * s3 * tp * u7) +
       (9 * m2 * t1 * up) / (4. * s * s4 * tp * u7) - (3 * s4 * t1 * up) / (4. * s * s3 * tp * u7) +
       (3 * s5 * t1 * up) / (4. * s * s3 * tp * u7) - (8 * Power(m2, 2) * up) / (s3 * s4 * u1 * u7) +
       (m2 * s5 * up) / (s3 * s4 * u1 * u7) + (6 * m2 * s * up) / (Power(tp, 2) * u1 * u7) +
       (m2 * s3 * up) / (Power(tp, 2) * u1 * u7) + (m2 * s4 * up) / (Power(tp, 2) * u1 * u7) -
       (s3 * s5 * up) / (2. * Power(tp, 2) * u1 * u7) - (s4 * s5 * up) / (2. * Power(tp, 2) * u1 * u7) +
       (3 * m2 * t1 * up) / (Power(tp, 2) * u1 * u7) - (3 * s5 * t1 * up) / (2. * Power(tp, 2) * u1 * u7) -
       (m2 * up) / (2. * tp * u1 * u7) - (3 * Power(m2, 2) * up) / (s3 * tp * u1 * u7) +
       (m2 * s * up) / (2. * s3 * tp * u1 * u7) - (3 * Power(m2, 2) * up) / (s4 * tp * u1 * u7) +
       (m2 * s * up) / (2. * s4 * tp * u1 * u7) - (m2 * s3 * up) / (2. * s4 * tp * u1 * u7) -
       (m2 * s4 * up) / (2. * s3 * tp * u1 * u7) - (s5 * up) / (2. * tp * u1 * u7) -
       (m2 * s5 * up) / (s3 * tp * u1 * u7) - (m2 * s5 * up) / (s4 * tp * u1 * u7) +
       (s3 * s5 * up) / (4. * s4 * tp * u1 * u7) + (s4 * s5 * up) / (4. * s3 * tp * u1 * u7) +
       (Power(s5, 2) * up) / (2. * s3 * tp * u1 * u7) + (Power(s5, 2) * up) / (2. * s4 * tp * u1 * u7) +
       (m2 * s * up) / (2. * t1 * tp * u1 * u7) - (m2 * s5 * up) / (2. * t1 * tp * u1 * u7) +
       (Power(s5, 2) * up) / (4. * t1 * tp * u1 * u7) + (m2 * t1 * up) / (4. * s3 * tp * u1 * u7) +
       (7 * m2 * t1 * up) / (4. * s4 * tp * u1 * u7) + (s5 * t1 * up) / (4. * s3 * tp * u1 * u7) -
       (s5 * t1 * up) / (2. * s4 * tp * u1 * u7) + (9 * u1 * up) / (4. * s * s3 * u7) +
       (3 * m2 * u1 * up) / (2. * s * s3 * s4 * u7) + (3 * m2 * u1 * up) / (4. * s * s4 * t1 * u7) +
       (3 * t1 * u1 * up) / (4. * s * s3 * tp * u7) + (3 * m2 * tp * u1 * up) / (2. * s * s3 * s4 * t1 * u7) -
       (m2 * up) / (2. * s3 * u6 * u7) + (s5 * up) / (4. * s3 * u6 * u7) - (2 * m2 * s5 * up) / (s3 * t1 * u6 * u7) +
       (Power(s5, 2) * up) / (s3 * t1 * u6 * u7) - (m2 * up) / (tp * u6 * u7) +
       (Power(m2, 2) * up) / (s3 * tp * u6 * u7) - (m2 * s4 * up) / (2. * s3 * tp * u6 * u7) -
       (3 * m2 * s5 * up) / (2. * s3 * tp * u6 * u7) - (s4 * s5 * up) / (2. * s3 * tp * u6 * u7) +
       (Power(s5, 2) * up) / (2. * s3 * tp * u6 * u7) - (m2 * t1 * up) / (2. * s3 * tp * u6 * u7) +
       (s4 * t1 * up) / (4. * s3 * tp * u6 * u7) + (s5 * t1 * up) / (2. * s3 * tp * u6 * u7) +
       (m2 * s * up) / (2. * tp * u1 * u6 * u7) - (m2 * s5 * up) / (2. * tp * u1 * u6 * u7) +
       (Power(s5, 2) * up) / (4. * tp * u1 * u6 * u7) - (5 * m2 * t1 * up) / (4. * tp * u1 * u6 * u7) +
       (s5 * t1 * up) / (4. * tp * u1 * u6 * u7) + (3 * s5 * u6 * up) / (2. * s * s3 * s4 * u7) -
       (9 * m2 * u6 * up) / (2. * s * s3 * t1 * u7) + (3 * m2 * u6 * up) / (s * s4 * t1 * u7) +
       (m2 * u6 * up) / (s3 * s4 * t1 * u7) + (6 * Power(m2, 2) * u6 * up) / (s * s3 * s4 * t1 * u7) +
       (3 * s5 * u6 * up) / (2. * s * s3 * t1 * u7) - (s5 * u6 * up) / (s3 * s4 * t1 * u7) +
       (3 * m2 * s5 * u6 * up) / (s * s3 * s4 * t1 * u7) - (3 * Power(s5, 2) * u6 * up) / (2. * s * s3 * s4 * t1 * u7) -
       (3 * u6 * up) / (4. * s * tp * u7) - (9 * m2 * u6 * up) / (4. * s * s3 * tp * u7) +
       (3 * u6 * up) / (2. * s4 * tp * u7) + (15 * m2 * u6 * up) / (4. * s * s4 * tp * u7) -
       (3 * s3 * u6 * up) / (4. * s * s4 * tp * u7) - (3 * s5 * u6 * up) / (4. * s * s3 * tp * u7) -
       (3 * s5 * u6 * up) / (4. * s * s4 * tp * u7) + (3 * m2 * u6 * up) / (s * t1 * tp * u7) +
       (m2 * u6 * up) / (4. * s4 * t1 * tp * u7) + (3 * m2 * s3 * u6 * up) / (s * s4 * t1 * tp * u7) -
       (s5 * u6 * up) / (2. * s4 * t1 * tp * u7) + (3 * m2 * s5 * u6 * up) / (2. * s * s4 * t1 * tp * u7) +
       (3 * s3 * s5 * u6 * up) / (4. * s * s4 * t1 * tp * u7) -
       (3 * Power(s5, 2) * u6 * up) / (4. * s * s4 * t1 * tp * u7) + (3 * t1 * u6 * up) / (2. * s * s4 * tp * u7) +
       (3 * m2 * u6 * up) / (Power(tp, 2) * u1 * u7) - (3 * s5 * u6 * up) / (2. * Power(tp, 2) * u1 * u7) +
       (7 * m2 * u6 * up) / (4. * s3 * tp * u1 * u7) + (m2 * u6 * up) / (4. * s4 * tp * u1 * u7) -
       (s5 * u6 * up) / (2. * s3 * tp * u1 * u7) + (s5 * u6 * up) / (4. * s4 * tp * u1 * u7) -
       (5 * m2 * u6 * up) / (4. * t1 * tp * u1 * u7) + (s5 * u6 * up) / (4. * t1 * tp * u1 * u7) +
       (3 * u1 * u6 * up) / (4. * s * s4 * tp * u7) + (3 * s3 * u1 * u6 * up) / (4. * s * s4 * t1 * tp * u7) +
       (3 * m2 * Power(u6, 2) * up) / (2. * s * s3 * s4 * t1 * u7) -
       (3 * s5 * Power(u6, 2) * up) / (2. * s * s3 * s4 * t1 * u7) + (3 * Power(u6, 2) * up) / (4. * s * s4 * tp * u7) +
       (3 * s3 * Power(u6, 2) * up) / (4. * s * s4 * t1 * tp * u7) -
       (3 * s5 * Power(u6, 2) * up) / (4. * s * s4 * t1 * tp * u7) + (9 * u7 * up) / (4. * s * s4 * u1) +
       (3 * m2 * u7 * up) / (2. * s * s3 * s4 * u1) + (3 * t1 * u7 * up) / (4. * s * s3 * tp * u1) +
       (3 * m2 * u7 * up) / (4. * s * s3 * u1 * u6) + (3 * s4 * t1 * u7 * up) / (4. * s * s3 * tp * u1 * u6) +
       (3 * m2 * tp * u7 * up) / (2. * s * s3 * s4 * u1 * u6) + (3 * u6 * u7 * up) / (4. * s * s4 * tp * u1) -
       (3 * m2 * Power(up, 2)) / (2. * s * s3 * s4 * u1) - (3 * m2 * Power(up, 2)) / (4. * s * s3 * tp * u1) +
       (3 * m2 * t1 * Power(up, 2)) / (4. * s * s3 * tp * u1 * u6) - (3 * u6 * Power(up, 2)) / (4. * s * s4 * tp * u1) -
       (3 * m2 * Power(up, 2)) / (2. * s * s3 * s4 * u7) - (3 * m2 * Power(up, 2)) / (4. * s * s4 * tp * u7) -
       (3 * t1 * Power(up, 2)) / (4. * s * s3 * tp * u7) - (m2 * Power(up, 2)) / (s3 * s4 * u1 * u7) +
       (m2 * Power(up, 2)) / (Power(tp, 2) * u1 * u7) - (m2 * Power(up, 2)) / (2. * s3 * tp * u1 * u7) -
       (m2 * Power(up, 2)) / (2. * s4 * tp * u1 * u7) + (3 * m2 * u6 * Power(up, 2)) / (4. * s * s4 * t1 * tp * u7));
}
}  // namespace ME
}  // namespace ProHQinUPC
