#include "../ME.h"

namespace ProHQinUPC {
namespace ME {
cdbl RQED(cdbl m2, cdbl s, cdbl t1, cdbl u1, cdbl tp, cdbl up) {
  DEF_s5 DEF_s3 DEF_s4 DEF_u6 DEF_u7 return tp * up *
      (9 / s - (2 * m2) / Power(s3, 2) - (12 * Power(m2, 2)) / (s * Power(s3, 2)) + 5 / (2. * s3) -
       (3 * m2) / (2. * s * s3) - (2 * m2) / Power(s4, 2) - (12 * Power(m2, 2)) / (s * Power(s4, 2)) + 5 / (2. * s4) -
       (3 * m2) / (2. * s * s4) - (3 * m2) / (s3 * s4) + (12 * Power(m2, 2)) / (s * s3 * s4) - (6 * s5) / (s * s3) -
       (6 * s5) / (s * s4) - (6 * m2 * s5) / (s * s3 * s4) - m2 / Power(t1, 2) +
       (4 * Power(m2, 2) * s) / (Power(s4, 2) * Power(t1, 2)) -
       (4 * Power(m2, 2) * s3) / (Power(s4, 2) * Power(t1, 2)) - (6 * Power(m2, 2)) / (s4 * Power(t1, 2)) -
       (m2 * s) / (s4 * Power(t1, 2)) + (3 * m2 * s3) / (s4 * Power(t1, 2)) -
       (4 * Power(m2, 2) * s5) / (Power(s4, 2) * Power(t1, 2)) - (2 * m2 * s5) / (s4 * Power(t1, 2)) + 1 / (2. * t1) +
       (3 * m2) / (s * t1) + (11 * m2) / (s3 * t1) - (12 * Power(m2, 2)) / (s * s3 * t1) -
       (2 * Power(m2, 2)) / (Power(s4, 2) * t1) - (2 * m2 * s) / (Power(s4, 2) * t1) - (m2 * s3) / (Power(s4, 2) * t1) +
       (9 * m2) / (2. * s4 * t1) + (12 * Power(m2, 2)) / (s * s4 * t1) + s / (2. * s4 * t1) -
       (6 * Power(m2, 2)) / (s3 * s4 * t1) - (m2 * s) / (2. * s3 * s4 * t1) - s3 / (2. * s4 * t1) -
       (3 * m2 * s3) / (s * s4 * t1) - (3 * s5) / (2. * s * t1) - (2 * s5) / (s3 * t1) + (6 * m2 * s5) / (s * s3 * t1) -
       (m2 * s5) / (Power(s4, 2) * t1) - (13 * s5) / (2. * s4 * t1) - (3 * m2 * s5) / (s * s4 * t1) +
       (2 * m2 * s5) / (s3 * s4 * t1) + (3 * s3 * s5) / (2. * s * s4 * t1) + (6 * m2 * t1) / (s * Power(s3, 2)) +
       (6 * t1) / (s * s3) + (3 * t1) / (2. * s * s4) + (6 * m2 * tp) / (s * Power(s3, 2)) +
       (6 * m2 * tp) / (s * Power(s4, 2)) - (3 * m2 * tp) / (s * s3 * s4) +
       (2 * Power(m2, 2) * tp) / (Power(s4, 2) * Power(t1, 2)) - (6 * Power(m2, 2) * tp) / (s * s4 * Power(t1, 2)) -
       (3 * m2 * s5 * tp) / (s * s4 * Power(t1, 2)) + (3 * m2 * tp) / (2. * s * s3 * t1) +
       (3 * m2 * tp) / (Power(s4, 2) * t1) + (6 * Power(m2, 2) * tp) / (s * Power(s4, 2) * t1) - (2 * tp) / (s4 * t1) -
       (15 * m2 * tp) / (2. * s * s4 * t1) - (6 * Power(m2, 2) * tp) / (s * s3 * s4 * t1) -
       (9 * s5 * tp) / (2. * s * s3 * t1) - (3 * s5 * tp) / (2. * s * s4 * t1) -
       (3 * m2 * s5 * tp) / (s * s3 * s4 * t1) + (3 * Power(s5, 2) * tp) / (2. * s * s3 * s4 * t1) +
       (4 * Power(m2, 3)) / (Power(s4, 2) * Power(u1, 2)) + (2 * Power(m2, 2) * s3) / (Power(s4, 2) * Power(u1, 2)) +
       (4 * Power(m2, 2)) / (s4 * Power(u1, 2)) - (m2 * s3) / (s4 * Power(u1, 2)) +
       (2 * Power(m2, 2) * s5) / (Power(s4, 2) * Power(u1, 2)) + (2 * m2 * s5) / (s4 * Power(u1, 2)) + 1 / (2. * u1) -
       (11 * m2) / (2. * s3 * u1) - (8 * Power(m2, 2)) / (Power(s4, 2) * u1) - (4 * m2 * s3) / (Power(s4, 2) * u1) -
       (21 * m2) / (2. * s4 * u1) + (12 * Power(m2, 2)) / (s * s4 * u1) + (6 * Power(m2, 2)) / (s3 * s4 * u1) +
       (5 * s3) / (2. * s4 * u1) - (6 * m2 * s3) / (s * s4 * u1) - (3 * s5) / (s * u1) - s5 / (2. * s3 * u1) -
       (4 * m2 * s5) / (Power(s4, 2) * u1) - (5 * s5) / (2. * s4 * u1) - (3 * m2 * s5) / (s * s4 * u1) -
       (2 * m2 * s5) / (s3 * s4 * u1) - Power(s5, 2) / (2. * s3 * s4 * u1) - (17 * m2) / (2. * t1 * u1) +
       (8 * Power(m2, 3)) / (Power(s4, 2) * t1 * u1) - (2 * Power(m2, 2) * s) / (Power(s4, 2) * t1 * u1) -
       (2 * Power(m2, 2) * s3) / (Power(s4, 2) * t1 * u1) - (m2 * s * s3) / (Power(s4, 2) * t1 * u1) +
       (8 * Power(m2, 2)) / (s4 * t1 * u1) - (2 * m2 * s) / (s4 * t1 * u1) - (3 * m2 * s3) / (s4 * t1 * u1) +
       (s * s3) / (2. * s4 * t1 * u1) - s5 / (2. * t1 * u1) - (2 * Power(m2, 2) * s5) / (Power(s4, 2) * t1 * u1) -
       (m2 * s * s5) / (Power(s4, 2) * t1 * u1) - (3 * m2 * s5) / (2. * s4 * t1 * u1) + (s3 * s5) / (s4 * t1 * u1) +
       (3 * t1) / (s * u1) - (12 * Power(m2, 2) * t1) / (s * Power(s4, 2) * u1) -
       (6 * m2 * s3 * t1) / (s * Power(s4, 2) * u1) - (12 * m2 * t1) / (s * s4 * u1) +
       (12 * Power(m2, 2) * t1) / (s * s3 * s4 * u1) + (3 * s3 * t1) / (s * s4 * u1) - (3 * s5 * t1) / (s * s3 * u1) -
       (6 * m2 * s5 * t1) / (s * Power(s4, 2) * u1) - (9 * s5 * t1) / (s * s4 * u1) -
       (3 * Power(s5, 2) * t1) / (s * s3 * s4 * u1) - (9 * m2 * tp) / (s * s4 * u1) -
       (3 * s5 * tp) / (2. * s * s4 * u1) - (2 * Power(m2, 2) * tp) / (Power(s4, 2) * t1 * u1) -
       (3 * m2 * tp) / (2. * s4 * t1 * u1) - (s5 * tp) / (s4 * t1 * u1) - (3 * m2 * u1) / (s * Power(s3, 2)) +
       (3 * m2 * u1) / (s * s3 * s4) - (3 * s5 * u1) / (2. * s * s3 * s4) +
       (4 * Power(m2, 2) * u1) / (Power(s4, 2) * Power(t1, 2)) - (m2 * u1) / (s4 * Power(t1, 2)) -
       (3 * m2 * u1) / (s * s3 * t1) - (3 * m2 * u1) / (s * s4 * t1) + (m2 * u1) / (s3 * s4 * t1) +
       (12 * Power(m2, 2) * u1) / (s * s3 * s4 * t1) + (3 * s5 * u1) / (2. * s * s3 * t1) +
       (3 * s5 * u1) / (2. * s * s4 * t1) - (s5 * u1) / (s3 * s4 * t1) - (12 * m2 * s5 * u1) / (s * s3 * s4 * t1) +
       (3 * Power(s5, 2) * u1) / (s * s3 * s4 * t1) + (6 * Power(m2, 2) * tp * u1) / (s * Power(s4, 2) * Power(t1, 2)) -
       (3 * m2 * tp * u1) / (s * s4 * Power(t1, 2)) - (3 * tp * u1) / (2. * s * s3 * t1) +
       (3 * m2 * tp * u1) / (s * Power(s4, 2) * t1) - (3 * m2 * tp * u1) / (s * s3 * s4 * t1) +
       (3 * s5 * tp * u1) / (s * s3 * s4 * t1) +
       ((128 * Power(m2, 3)) / (Power(s3, 2) * Power(u6, 2)) + (128 * Power(m2, 2)) / (s3 * Power(u6, 2)) +
        (64 * Power(m2, 2) * s4) / (Power(s3, 2) * Power(u6, 2)) - (32 * m2 * s4) / (s3 * Power(u6, 2)) +
        (64 * Power(m2, 2) * s5) / (Power(s3, 2) * Power(u6, 2)) +
        (64 * Power(m2, 2) * t1) / (Power(s3, 2) * Power(u6, 2)) +
        (64 * Power(m2, 2) * tp) / (Power(s3, 2) * Power(u6, 2)) - (32 * m2 * tp) / (s3 * Power(u6, 2)) +
        (128 * Power(m2, 2)) / (Power(s3, 2) * u6) + (64 * m2) / (s3 * u6) - (32 * m2 * t1) / (Power(s3, 2) * u6) -
        (32 * m2 * tp) / (Power(s3, 2) * u6) + (16 * tp) / (s3 * u6)) /
           32. +
       ((-64 * m2) / (s3 * t1) - (32 * m2) / (s4 * t1) + (32 * Power(m2, 2)) / (s3 * s4 * t1) + (16 * s5) / (s3 * t1) +
        (16 * s5) / (s4 * t1) - (48 * m2 * s5) / (s3 * s4 * t1) + (16 * Power(s5, 2)) / (s3 * s4 * t1) -
        (32 * m2) / (s3 * u6) - (64 * m2) / (s4 * u6) + (32 * Power(m2, 2)) / (s3 * s4 * u6) + (16 * s5) / (s3 * u6) +
        (16 * s5) / (s4 * u6) - (48 * m2 * s5) / (s3 * s4 * u6) + (16 * Power(s5, 2)) / (s3 * s4 * u6) +
        (32 * Power(m2, 2)) / (s3 * t1 * u6) + (32 * Power(m2, 2)) / (s4 * t1 * u6) +
        (128 * Power(m2, 3)) / (s3 * s4 * t1 * u6) - (48 * m2 * s5) / (s3 * t1 * u6) - (48 * m2 * s5) / (s4 * t1 * u6) -
        (64 * Power(m2, 2) * s5) / (s3 * s4 * t1 * u6) + (16 * Power(s5, 2)) / (s3 * t1 * u6) +
        (16 * Power(s5, 2)) / (s4 * t1 * u6) - (32 * m2 * Power(s5, 2)) / (s3 * s4 * t1 * u6) +
        (16 * Power(s5, 3)) / (s3 * s4 * t1 * u6) + (128 * Power(m2, 2) * tp) / (s3 * s4 * t1 * u6) -
        (16 * m2 * s5 * tp) / (s3 * s4 * t1 * u6) + (16 * m2 * Power(tp, 2)) / (s3 * s4 * t1 * u6)) /
           16. -
       m2 / Power(u6, 2) + (4 * Power(m2, 2) * s) / (Power(s3, 2) * Power(u6, 2)) -
       (6 * Power(m2, 2)) / (s3 * Power(u6, 2)) - (m2 * s) / (s3 * Power(u6, 2)) -
       (4 * Power(m2, 2) * s4) / (Power(s3, 2) * Power(u6, 2)) + (3 * m2 * s4) / (s3 * Power(u6, 2)) -
       (4 * Power(m2, 2) * s5) / (Power(s3, 2) * Power(u6, 2)) - (2 * m2 * s5) / (s3 * Power(u6, 2)) +
       (2 * Power(m2, 2) * t1) / (Power(s3, 2) * Power(u6, 2)) - (5 * m2 * t1) / (s3 * Power(u6, 2)) -
       (12 * Power(m2, 2) * t1) / (s * s3 * Power(u6, 2)) + (6 * m2 * s4 * t1) / (s * s3 * Power(u6, 2)) +
       (2 * Power(m2, 2) * tp) / (Power(s3, 2) * Power(u6, 2)) - (6 * Power(m2, 2) * tp) / (s * s3 * Power(u6, 2)) -
       (3 * m2 * s5 * tp) / (s * s3 * Power(u6, 2)) + (3 * m2 * t1 * tp) / (s * s3 * Power(u6, 2)) +
       (4 * Power(m2, 3)) / (Power(u1, 2) * Power(u6, 2)) + (2 * Power(m2, 2) * s) / (Power(u1, 2) * Power(u6, 2)) +
       (2 * Power(m2, 2) * s5) / (Power(u1, 2) * Power(u6, 2)) +
       (2 * Power(m2, 2) * t1) / (Power(u1, 2) * Power(u6, 2)) - (2 * Power(m2, 2)) / (u1 * Power(u6, 2)) -
       (m2 * s) / (u1 * Power(u6, 2)) + (8 * Power(m2, 3)) / (s3 * u1 * Power(u6, 2)) +
       (4 * Power(m2, 2) * s) / (s3 * u1 * Power(u6, 2)) - (2 * Power(m2, 2) * s4) / (s3 * u1 * Power(u6, 2)) -
       (m2 * s5) / (u1 * Power(u6, 2)) - (2 * Power(m2, 2) * s5) / (s3 * u1 * Power(u6, 2)) -
       (7 * m2 * t1) / (u1 * Power(u6, 2)) - (12 * Power(m2, 2) * t1) / (s * u1 * Power(u6, 2)) +
       (4 * Power(m2, 2) * t1) / (s3 * u1 * Power(u6, 2)) - (6 * m2 * s5 * t1) / (s * u1 * Power(u6, 2)) -
       (6 * m2 * Power(t1, 2)) / (s * u1 * Power(u6, 2)) - (2 * Power(m2, 2) * tp) / (s3 * u1 * Power(u6, 2)) +
       (2 * Power(m2, 2) * u1) / (Power(s3, 2) * Power(u6, 2)) + 1 / (2. * u6) + (3 * m2) / (s * u6) -
       (2 * Power(m2, 2)) / (Power(s3, 2) * u6) - (2 * m2 * s) / (Power(s3, 2) * u6) + (9 * m2) / (2. * s3 * u6) +
       (12 * Power(m2, 2)) / (s * s3 * u6) + s / (2. * s3 * u6) + (11 * m2) / (s4 * u6) -
       (12 * Power(m2, 2)) / (s * s4 * u6) - (6 * Power(m2, 2)) / (s3 * s4 * u6) - (m2 * s) / (2. * s3 * s4 * u6) -
       (m2 * s4) / (Power(s3, 2) * u6) - s4 / (2. * s3 * u6) - (3 * m2 * s4) / (s * s3 * u6) -
       (3 * s5) / (2. * s * u6) - (m2 * s5) / (Power(s3, 2) * u6) - (13 * s5) / (2. * s3 * u6) -
       (3 * m2 * s5) / (s * s3 * u6) - (2 * s5) / (s4 * u6) + (6 * m2 * s5) / (s * s4 * u6) +
       (2 * m2 * s5) / (s3 * s4 * u6) + (3 * s4 * s5) / (2. * s * s3 * u6) + (4 * m2) / (t1 * u6) -
       (8 * Power(m2, 2)) / (s3 * t1 * u6) - (m2 * s) / (2. * s3 * t1 * u6) - (8 * Power(m2, 2)) / (s4 * t1 * u6) -
       (m2 * s) / (2. * s4 * t1 * u6) + (4 * Power(m2, 2) * s) / (s3 * s4 * t1 * u6) - (m2 * s3) / (s4 * t1 * u6) -
       (m2 * s4) / (s3 * t1 * u6) - (2 * s5) / (t1 * u6) + (9 * m2 * s5) / (s3 * t1 * u6) +
       (9 * m2 * s5) / (s4 * t1 * u6) - (8 * Power(m2, 2) * s5) / (s3 * s4 * t1 * u6) -
       (7 * m2 * s * s5) / (s3 * s4 * t1 * u6) + (s3 * s5) / (2. * s4 * t1 * u6) + (s4 * s5) / (2. * s3 * t1 * u6) -
       (5 * Power(s5, 2)) / (2. * s3 * t1 * u6) - (5 * Power(s5, 2)) / (2. * s4 * t1 * u6) +
       (8 * m2 * Power(s5, 2)) / (s3 * s4 * t1 * u6) + (2 * s * Power(s5, 2)) / (s3 * s4 * t1 * u6) -
       (2 * Power(s5, 3)) / (s3 * s4 * t1 * u6) + (3 * t1) / (2. * s * u6) + (3 * m2 * t1) / (Power(s3, 2) * u6) +
       (6 * Power(m2, 2) * t1) / (s * Power(s3, 2) * u6) + (3 * t1) / (2. * s3 * u6) +
       (3 * m2 * t1) / (2. * s * s3 * u6) + (12 * m2 * t1) / (s * s4 * u6) - (3 * m2 * t1) / (2. * s3 * s4 * u6) -
       (12 * Power(m2, 2) * t1) / (s * s3 * s4 * u6) + (3 * s4 * t1) / (2. * s * s3 * u6) -
       (3 * s5 * t1) / (s * s3 * u6) + (s5 * t1) / (s3 * s4 * u6) + (6 * m2 * s5 * t1) / (s * s3 * s4 * u6) +
       (3 * m2 * tp) / (Power(s3, 2) * u6) + (6 * Power(m2, 2) * tp) / (s * Power(s3, 2) * u6) - (2 * tp) / (s3 * u6) -
       (15 * m2 * tp) / (2. * s * s3 * u6) + (3 * m2 * tp) / (2. * s * s4 * u6) -
       (6 * Power(m2, 2) * tp) / (s * s3 * s4 * u6) - (3 * s5 * tp) / (2. * s * s3 * u6) -
       (9 * s5 * tp) / (2. * s * s4 * u6) - (3 * m2 * s5 * tp) / (s * s3 * s4 * u6) +
       (3 * Power(s5, 2) * tp) / (2. * s * s3 * s4 * u6) + (3 * m2 * tp) / (s3 * t1 * u6) +
       (6 * Power(m2, 2) * tp) / (s * s3 * t1 * u6) + (3 * m2 * tp) / (s4 * t1 * u6) +
       (6 * Power(m2, 2) * tp) / (s * s4 * t1 * u6) - (8 * Power(m2, 2) * tp) / (s3 * s4 * t1 * u6) +
       (2 * m2 * s * tp) / (s3 * s4 * t1 * u6) - (3 * s5 * tp) / (2. * s3 * t1 * u6) -
       (3 * s5 * tp) / (2. * s4 * t1 * u6) - (m2 * s5 * tp) / (s3 * s4 * t1 * u6) -
       (3 * Power(s5, 2) * tp) / (2. * s * s3 * t1 * u6) - (3 * Power(s5, 2) * tp) / (2. * s * s4 * t1 * u6) +
       (Power(s5, 2) * tp) / (s3 * s4 * t1 * u6) - (3 * t1 * tp) / (2. * s * s3 * u6) +
       (3 * m2 * t1 * tp) / (2. * s * s3 * s4 * u6) - (3 * s5 * t1 * tp) / (2. * s * s3 * s4 * u6) +
       (m2 * Power(tp, 2)) / (s3 * s4 * t1 * u6) + (4 * Power(m2, 2)) / (Power(u1, 2) * u6) -
       (m2 * s) / (Power(u1, 2) * u6) + (8 * Power(m2, 3)) / (s4 * Power(u1, 2) * u6) -
       (2 * Power(m2, 2) * s) / (s4 * Power(u1, 2) * u6) - (2 * Power(m2, 2) * s3) / (s4 * Power(u1, 2) * u6) +
       (2 * m2 * s5) / (Power(u1, 2) * u6) - (2 * Power(m2, 2) * s5) / (s4 * Power(u1, 2) * u6) -
       (m2 * t1) / (Power(u1, 2) * u6) - (2 * Power(m2, 2) * t1) / (s4 * Power(u1, 2) * u6) -
       (2 * Power(m2, 2) * tp) / (s4 * Power(u1, 2) * u6) + (2 * m2 * s5 * tp) / (s4 * Power(u1, 2) * u6) +
       (12 * Power(m2, 2)) / (s * u1 * u6) + s / (2. * u1 * u6) + (8 * Power(m2, 2)) / (s3 * u1 * u6) -
       (16 * Power(m2, 2)) / (s4 * u1 * u6) + (3 * m2 * s) / (s4 * u1 * u6) + (8 * Power(m2, 3)) / (s3 * s4 * u1 * u6) +
       (3 * m2 * s3) / (2. * s4 * u1 * u6) - (3 * m2 * s4) / (s3 * u1 * u6) - (4 * s5) / (u1 * u6) -
       (3 * m2 * s5) / (2. * s3 * u1 * u6) - (s * s5) / (s3 * u1 * u6) - (s * s5) / (s4 * u1 * u6) -
       (6 * Power(m2, 2) * s5) / (s3 * s4 * u1 * u6) + (2 * m2 * s * s5) / (s3 * s4 * u1 * u6) +
       (3 * s3 * s5) / (2. * s4 * u1 * u6) - (3 * Power(s5, 2)) / (s * u1 * u6) +
       (3 * Power(s5, 2)) / (2. * s4 * u1 * u6) + (m2 * Power(s5, 2)) / (s3 * s4 * u1 * u6) -
       (s * Power(s5, 2)) / (s3 * s4 * u1 * u6) + (6 * Power(m2, 2)) / (t1 * u1 * u6) - (m2 * s) / (t1 * u1 * u6) +
       (8 * Power(m2, 3)) / (s4 * t1 * u1 * u6) - (4 * Power(m2, 2) * s3) / (s4 * t1 * u1 * u6) -
       (5 * m2 * s * s3) / (2. * s4 * t1 * u1 * u6) - (2 * m2 * s5) / (t1 * u1 * u6) -
       (6 * Power(m2, 2) * s5) / (s4 * t1 * u1 * u6) - (3 * m2 * s * s5) / (s4 * t1 * u1 * u6) +
       (2 * m2 * s3 * s5) / (s4 * t1 * u1 * u6) + (s * s3 * s5) / (s4 * t1 * u1 * u6) -
       Power(s5, 2) / (2. * t1 * u1 * u6) + (m2 * Power(s5, 2)) / (s4 * t1 * u1 * u6) +
       (s * Power(s5, 2)) / (s4 * t1 * u1 * u6) + (4 * t1) / (u1 * u6) - (12 * m2 * t1) / (s * u1 * u6) -
       (9 * m2 * t1) / (2. * s3 * u1 * u6) + (12 * Power(m2, 2) * t1) / (s * s3 * u1 * u6) +
       (15 * m2 * t1) / (2. * s4 * u1 * u6) - (24 * Power(m2, 2) * t1) / (s * s4 * u1 * u6) +
       (2 * Power(m2, 2) * t1) / (s3 * s4 * u1 * u6) + (6 * m2 * s3 * t1) / (s * s4 * u1 * u6) +
       (3 * s4 * t1) / (2. * s3 * u1 * u6) - (6 * m2 * s4 * t1) / (s * s3 * u1 * u6) - (9 * s5 * t1) / (s * u1 * u6) +
       (s5 * t1) / (s3 * u1 * u6) - (3 * m2 * s5 * t1) / (s * s3 * u1 * u6) - (3 * s5 * t1) / (2. * s4 * u1 * u6) +
       (6 * m2 * s5 * t1) / (s * s4 * u1 * u6) + (2 * m2 * s5 * t1) / (s3 * s4 * u1 * u6) -
       (3 * Power(s5, 2) * t1) / (2. * s3 * s4 * u1 * u6) + (3 * Power(t1, 2)) / (s * u1 * u6) -
       (6 * m2 * Power(t1, 2)) / (s * s3 * u1 * u6) + (6 * m2 * Power(t1, 2)) / (s * s4 * u1 * u6) +
       (3 * s4 * Power(t1, 2)) / (2. * s * s3 * u1 * u6) - (9 * m2 * tp) / (2. * s3 * u1 * u6) +
       (4 * m2 * tp) / (s4 * u1 * u6) + (s5 * tp) / (2. * s3 * u1 * u6) - (3 * s5 * tp) / (s4 * u1 * u6) +
       (3 * m2 * s5 * tp) / (2. * s3 * s4 * u1 * u6) - (Power(s5, 2) * tp) / (2. * s3 * s4 * u1 * u6) +
       (3 * m2 * s5 * tp) / (2. * s4 * t1 * u1 * u6) - (Power(s5, 2) * tp) / (2. * s4 * t1 * u1 * u6) -
       (9 * m2 * t1 * tp) / (s * s3 * u1 * u6) + (6 * m2 * t1 * tp) / (s * s4 * u1 * u6) -
       (3 * s5 * t1 * tp) / (2. * s * s3 * u1 * u6) - (6 * s5 * t1 * tp) / (s * s4 * u1 * u6) +
       (6 * Power(m2, 2) * u1) / (s * Power(s3, 2) * u6) + (9 * m2 * u1) / (s * s3 * u6) - (m2 * u1) / (s3 * s4 * u6) -
       (3 * s5 * u1) / (s * s3 * u6) + (s5 * u1) / (s3 * s4 * u6) + (m2 * u1) / (s3 * t1 * u6) -
       (m2 * u1) / (s4 * t1 * u6) + (6 * Power(m2, 2) * u1) / (s3 * s4 * t1 * u6) - (s5 * u1) / (2. * s3 * t1 * u6) +
       (s5 * u1) / (2. * s4 * t1 * u6) - (6 * m2 * s5 * u1) / (s3 * s4 * t1 * u6) +
       (3 * Power(s5, 2) * u1) / (2. * s3 * s4 * t1 * u6) - (3 * tp * u1) / (2. * s * s3 * u6) -
       (3 * m2 * tp * u1) / (2. * s * s3 * s4 * u6) - (3 * s5 * tp * u1) / (2. * s * s3 * s4 * u6) +
       (3 * m2 * tp * u1) / (s * s3 * t1 * u6) + (m2 * tp * u1) / (2. * s3 * s4 * t1 * u6) +
       (6 * Power(m2, 2) * tp * u1) / (s * s3 * s4 * t1 * u6) - (3 * s5 * tp * u1) / (2. * s * s3 * t1 * u6) -
       (6 * m2 * s5 * tp * u1) / (s * s3 * s4 * t1 * u6) + (3 * Power(s5, 2) * tp * u1) / (2. * s * s3 * s4 * t1 * u6) +
       (3 * m2 * Power(tp, 2) * u1) / (2. * s * s3 * s4 * t1 * u6) + (3 * u6) / (2. * s * s3) +
       (6 * m2 * u6) / (s * Power(s4, 2)) + (6 * u6) / (s * s4) +
       (2 * Power(m2, 2) * u6) / (Power(s4, 2) * Power(t1, 2)) - (5 * m2 * u6) / (s4 * Power(t1, 2)) -
       (12 * Power(m2, 2) * u6) / (s * s4 * Power(t1, 2)) + (6 * m2 * s3 * u6) / (s * s4 * Power(t1, 2)) +
       (3 * u6) / (2. * s * t1) + (12 * m2 * u6) / (s * s3 * t1) + (3 * m2 * u6) / (Power(s4, 2) * t1) +
       (6 * Power(m2, 2) * u6) / (s * Power(s4, 2) * t1) + (3 * u6) / (2. * s4 * t1) +
       (3 * m2 * u6) / (2. * s * s4 * t1) - (3 * m2 * u6) / (2. * s3 * s4 * t1) -
       (12 * Power(m2, 2) * u6) / (s * s3 * s4 * t1) + (3 * s3 * u6) / (2. * s * s4 * t1) -
       (3 * s5 * u6) / (s * s4 * t1) + (s5 * u6) / (s3 * s4 * t1) + (6 * m2 * s5 * u6) / (s * s3 * s4 * t1) +
       (3 * m2 * tp * u6) / (s * s4 * Power(t1, 2)) - (3 * tp * u6) / (2. * s * s4 * t1) +
       (3 * m2 * tp * u6) / (2. * s * s3 * s4 * t1) - (3 * s5 * tp * u6) / (2. * s * s3 * s4 * t1) -
       (6 * m2 * u6) / (s * s4 * u1) + (3 * s3 * u6) / (2. * s * s4 * u1) -
       (2 * Power(m2, 2) * u6) / (Power(s4, 2) * t1 * u1) - (3 * m2 * u6) / (s4 * t1 * u1) +
       (3 * s3 * u6) / (2. * s4 * t1 * u1) + (6 * Power(m2, 2) * u1 * u6) / (s * Power(s4, 2) * Power(t1, 2)) -
       (3 * m2 * u1 * u6) / (s * s4 * Power(t1, 2)) + (3 * m2 * u1 * u6) / (s * Power(s4, 2) * t1) -
       (3 * m2 * u1 * u6) / (s * s3 * s4 * t1) + (3 * s5 * u1 * u6) / (2. * s * s3 * s4 * t1) +
       ((128 * Power(m2, 3)) / (Power(s4, 2) * Power(t1, 2)) +
        (64 * Power(m2, 2) * s3) / (Power(s4, 2) * Power(t1, 2)) + (128 * Power(m2, 2)) / (s4 * Power(t1, 2)) -
        (32 * m2 * s3) / (s4 * Power(t1, 2)) + (64 * Power(m2, 2) * s5) / (Power(s4, 2) * Power(t1, 2)) +
        (128 * Power(m2, 2)) / (Power(s4, 2) * t1) + (64 * m2) / (s4 * t1) +
        (64 * Power(m2, 2) * tp) / (Power(s4, 2) * Power(t1, 2)) - (32 * m2 * tp) / (s4 * Power(t1, 2)) -
        (32 * m2 * tp) / (Power(s4, 2) * t1) + (16 * tp) / (s4 * t1) +
        (64 * Power(m2, 2) * u6) / (Power(s4, 2) * Power(t1, 2)) - (32 * m2 * u6) / (Power(s4, 2) * t1)) /
           32. +
       (4 * Power(m2, 3)) / (Power(s3, 2) * Power(u7, 2)) + (4 * Power(m2, 2)) / (s3 * Power(u7, 2)) +
       (2 * Power(m2, 2) * s4) / (Power(s3, 2) * Power(u7, 2)) - (m2 * s4) / (s3 * Power(u7, 2)) +
       (2 * Power(m2, 2) * s5) / (Power(s3, 2) * Power(u7, 2)) + (2 * m2 * s5) / (s3 * Power(u7, 2)) +
       (4 * Power(m2, 3)) / (Power(t1, 2) * Power(u7, 2)) + (2 * Power(m2, 2) * s) / (Power(t1, 2) * Power(u7, 2)) +
       (2 * Power(m2, 2) * s5) / (Power(t1, 2) * Power(u7, 2)) + (4 * Power(m2, 2)) / (t1 * Power(u7, 2)) -
       (m2 * s) / (t1 * Power(u7, 2)) + (8 * Power(m2, 3)) / (s3 * t1 * Power(u7, 2)) -
       (2 * Power(m2, 2) * s) / (s3 * t1 * Power(u7, 2)) - (2 * Power(m2, 2) * s4) / (s3 * t1 * Power(u7, 2)) +
       (2 * m2 * s5) / (t1 * Power(u7, 2)) - (2 * Power(m2, 2) * s5) / (s3 * t1 * Power(u7, 2)) -
       (2 * Power(m2, 2) * tp) / (s3 * t1 * Power(u7, 2)) + (2 * m2 * s5 * tp) / (s3 * t1 * Power(u7, 2)) +
       (2 * Power(m2, 2) * u1) / (Power(s3, 2) * Power(u7, 2)) + (2 * m2 * u1) / (s3 * Power(u7, 2)) +
       (2 * Power(m2, 2) * u1) / (Power(t1, 2) * Power(u7, 2)) + (2 * m2 * u1) / (t1 * Power(u7, 2)) -
       (2 * Power(m2, 2) * u1) / (s3 * t1 * Power(u7, 2)) + (2 * m2 * tp * u1) / (s3 * t1 * Power(u7, 2)) +
       (2 * Power(m2, 2) * u6) / (Power(t1, 2) * Power(u7, 2)) - (m2 * u6) / (t1 * Power(u7, 2)) -
       (2 * Power(m2, 2) * u6) / (s3 * t1 * Power(u7, 2)) + 1 / (2. * u7) - (8 * Power(m2, 2)) / (Power(s3, 2) * u7) -
       (21 * m2) / (2. * s3 * u7) + (12 * Power(m2, 2)) / (s * s3 * u7) - (11 * m2) / (2. * s4 * u7) +
       (6 * Power(m2, 2)) / (s3 * s4 * u7) - (4 * m2 * s4) / (Power(s3, 2) * u7) + (5 * s4) / (2. * s3 * u7) -
       (6 * m2 * s4) / (s * s3 * u7) - (3 * s5) / (s * u7) - (4 * m2 * s5) / (Power(s3, 2) * u7) -
       (5 * s5) / (2. * s3 * u7) - (3 * m2 * s5) / (s * s3 * u7) - s5 / (2. * s4 * u7) -
       (2 * m2 * s5) / (s3 * s4 * u7) - Power(s5, 2) / (2. * s3 * s4 * u7) - (2 * Power(m2, 2)) / (Power(t1, 2) * u7) -
       (m2 * s) / (Power(t1, 2) * u7) + (8 * Power(m2, 3)) / (s4 * Power(t1, 2) * u7) +
       (4 * Power(m2, 2) * s) / (s4 * Power(t1, 2) * u7) - (2 * Power(m2, 2) * s3) / (s4 * Power(t1, 2) * u7) -
       (m2 * s5) / (Power(t1, 2) * u7) - (2 * Power(m2, 2) * s5) / (s4 * Power(t1, 2) * u7) +
       (12 * Power(m2, 2)) / (s * t1 * u7) + s / (2. * t1 * u7) - (16 * Power(m2, 2)) / (s3 * t1 * u7) +
       (3 * m2 * s) / (s3 * t1 * u7) + (8 * Power(m2, 2)) / (s4 * t1 * u7) + (8 * Power(m2, 3)) / (s3 * s4 * t1 * u7) -
       (3 * m2 * s3) / (s4 * t1 * u7) + (3 * m2 * s4) / (2. * s3 * t1 * u7) - (4 * s5) / (t1 * u7) -
       (s * s5) / (s3 * t1 * u7) - (3 * m2 * s5) / (2. * s4 * t1 * u7) - (s * s5) / (s4 * t1 * u7) -
       (6 * Power(m2, 2) * s5) / (s3 * s4 * t1 * u7) + (2 * m2 * s * s5) / (s3 * s4 * t1 * u7) +
       (3 * s4 * s5) / (2. * s3 * t1 * u7) - (3 * Power(s5, 2)) / (s * t1 * u7) +
       (3 * Power(s5, 2)) / (2. * s3 * t1 * u7) + (m2 * Power(s5, 2)) / (s3 * s4 * t1 * u7) -
       (s * Power(s5, 2)) / (s3 * s4 * t1 * u7) - (6 * m2 * t1) / (s * s3 * u7) + (3 * s4 * t1) / (2. * s * s3 * u7) -
       (9 * m2 * tp) / (s * s3 * u7) - (3 * s5 * tp) / (2. * s * s3 * u7) -
       (2 * Power(m2, 2) * tp) / (s4 * Power(t1, 2) * u7) + (4 * m2 * tp) / (s3 * t1 * u7) -
       (9 * m2 * tp) / (2. * s4 * t1 * u7) - (3 * s5 * tp) / (s3 * t1 * u7) + (s5 * tp) / (2. * s4 * t1 * u7) +
       (3 * m2 * s5 * tp) / (2. * s3 * s4 * t1 * u7) - (Power(s5, 2) * tp) / (2. * s3 * s4 * t1 * u7) +
       (2 * m2) / (u1 * u7) + (8 * Power(m2, 3)) / (s3 * s4 * u1 * u7) - s5 / (u1 * u7) -
       (2 * m2 * s5) / (s3 * u1 * u7) - (2 * m2 * s5) / (s4 * u1 * u7) - (4 * Power(m2, 2) * s5) / (s3 * s4 * u1 * u7) +
       Power(s5, 2) / (s3 * u1 * u7) + Power(s5, 2) / (s4 * u1 * u7) - (2 * m2 * Power(s5, 2)) / (s3 * s4 * u1 * u7) +
       Power(s5, 3) / (s3 * s4 * u1 * u7) + (m2 * s) / (2. * t1 * u1 * u7) + (8 * Power(m2, 3)) / (s4 * t1 * u1 * u7) -
       (4 * Power(m2, 2) * s3) / (s4 * t1 * u1 * u7) + (m2 * s * s3) / (2. * s4 * t1 * u1 * u7) -
       (2 * m2 * s5) / (t1 * u1 * u7) - (6 * Power(m2, 2) * s5) / (s4 * t1 * u1 * u7) +
       (3 * m2 * s * s5) / (2. * s4 * t1 * u1 * u7) + (2 * m2 * s3 * s5) / (s4 * t1 * u1 * u7) -
       (s * s3 * s5) / (2. * s4 * t1 * u1 * u7) + Power(s5, 2) / (t1 * u1 * u7) +
       (m2 * Power(s5, 2)) / (s4 * t1 * u1 * u7) - (s * Power(s5, 2)) / (2. * s4 * t1 * u1 * u7) -
       (6 * Power(m2, 2) * tp) / (s4 * t1 * u1 * u7) + (2 * m2 * s5 * tp) / (s4 * t1 * u1 * u7) +
       (Power(s5, 2) * tp) / (2. * s4 * t1 * u1 * u7) - (3 * u1) / (2. * s * u7) - (4 * m2 * u1) / (Power(s3, 2) * u7) +
       (6 * Power(m2, 2) * u1) / (s * Power(s3, 2) * u7) - (2 * u1) / (s3 * u7) + (9 * m2 * u1) / (2. * s * s3 * u7) -
       (3 * s4 * u1) / (2. * s * s3 * u7) - (m2 * u1) / (Power(t1, 2) * u7) +
       (4 * Power(m2, 2) * u1) / (s4 * Power(t1, 2) * u7) - (2 * u1) / (t1 * u7) + (3 * m2 * u1) / (s * t1 * u7) +
       (3 * m2 * u1) / (s3 * t1 * u7) + (6 * Power(m2, 2) * u1) / (s * s3 * t1 * u7) +
       (3 * m2 * u1) / (2. * s4 * t1 * u7) + (2 * Power(m2, 2) * u1) / (s3 * s4 * t1 * u7) -
       (3 * m2 * s4 * u1) / (s * s3 * t1 * u7) - (3 * s5 * u1) / (2. * s * t1 * u7) - (2 * s5 * u1) / (s3 * t1 * u7) -
       (3 * m2 * s5 * u1) / (s * s3 * t1 * u7) - (m2 * s5 * u1) / (s3 * s4 * t1 * u7) +
       (3 * s4 * s5 * u1) / (2. * s * s3 * t1 * u7) + (9 * m2 * tp * u1) / (2. * s * s3 * s4 * u7) -
       (tp * u1) / (s3 * t1 * u7) + (3 * m2 * tp * u1) / (2. * s * s3 * t1 * u7) +
       (2 * m2 * tp * u1) / (s3 * s4 * t1 * u7) + (3 * s5 * tp * u1) / (2. * s * s3 * t1 * u7) +
       (s5 * tp * u1) / (s3 * s4 * t1 * u7) + (3 * tp * Power(u1, 2)) / (2. * s * s3 * t1 * u7) +
       (3 * m2 * tp * Power(u1, 2)) / (2. * s * s3 * s4 * t1 * u7) - (17 * m2) / (2. * u6 * u7) +
       (8 * Power(m2, 3)) / (Power(s3, 2) * u6 * u7) - (2 * Power(m2, 2) * s) / (Power(s3, 2) * u6 * u7) +
       (8 * Power(m2, 2)) / (s3 * u6 * u7) - (2 * m2 * s) / (s3 * u6 * u7) -
       (2 * Power(m2, 2) * s4) / (Power(s3, 2) * u6 * u7) - (m2 * s * s4) / (Power(s3, 2) * u6 * u7) -
       (3 * m2 * s4) / (s3 * u6 * u7) + (s * s4) / (2. * s3 * u6 * u7) - s5 / (2. * u6 * u7) -
       (2 * Power(m2, 2) * s5) / (Power(s3, 2) * u6 * u7) - (m2 * s * s5) / (Power(s3, 2) * u6 * u7) -
       (3 * m2 * s5) / (2. * s3 * u6 * u7) + (s4 * s5) / (s3 * u6 * u7) + (6 * Power(m2, 2)) / (t1 * u6 * u7) -
       (m2 * s) / (t1 * u6 * u7) + (8 * Power(m2, 3)) / (s3 * t1 * u6 * u7) -
       (4 * Power(m2, 2) * s4) / (s3 * t1 * u6 * u7) - (5 * m2 * s * s4) / (2. * s3 * t1 * u6 * u7) -
       (2 * m2 * s5) / (t1 * u6 * u7) - (6 * Power(m2, 2) * s5) / (s3 * t1 * u6 * u7) -
       (3 * m2 * s * s5) / (s3 * t1 * u6 * u7) + (2 * m2 * s4 * s5) / (s3 * t1 * u6 * u7) +
       (s * s4 * s5) / (s3 * t1 * u6 * u7) - Power(s5, 2) / (2. * t1 * u6 * u7) +
       (m2 * Power(s5, 2)) / (s3 * t1 * u6 * u7) + (s * Power(s5, 2)) / (s3 * t1 * u6 * u7) -
       (2 * Power(m2, 2) * t1) / (Power(s3, 2) * u6 * u7) - (3 * m2 * t1) / (s3 * u6 * u7) +
       (3 * s4 * t1) / (2. * s3 * u6 * u7) - (2 * Power(m2, 2) * tp) / (Power(s3, 2) * u6 * u7) -
       (3 * m2 * tp) / (2. * s3 * u6 * u7) - (s5 * tp) / (s3 * u6 * u7) +
       (3 * m2 * s5 * tp) / (2. * s3 * t1 * u6 * u7) - (Power(s5, 2) * tp) / (2. * s3 * t1 * u6 * u7) +
       (m2 * s) / (2. * u1 * u6 * u7) + (8 * Power(m2, 3)) / (s3 * u1 * u6 * u7) -
       (4 * Power(m2, 2) * s4) / (s3 * u1 * u6 * u7) + (m2 * s * s4) / (2. * s3 * u1 * u6 * u7) -
       (2 * m2 * s5) / (u1 * u6 * u7) - (6 * Power(m2, 2) * s5) / (s3 * u1 * u6 * u7) +
       (3 * m2 * s * s5) / (2. * s3 * u1 * u6 * u7) + (2 * m2 * s4 * s5) / (s3 * u1 * u6 * u7) -
       (s * s4 * s5) / (2. * s3 * u1 * u6 * u7) + Power(s5, 2) / (u1 * u6 * u7) +
       (m2 * Power(s5, 2)) / (s3 * u1 * u6 * u7) - (s * Power(s5, 2)) / (2. * s3 * u1 * u6 * u7) +
       (8 * Power(m2, 3)) / (t1 * u1 * u6 * u7) + (8 * Power(m2, 2) * s) / (t1 * u1 * u6 * u7) +
       (m2 * Power(s, 2)) / (t1 * u1 * u6 * u7) - (4 * Power(m2, 2) * s5) / (t1 * u1 * u6 * u7) -
       (m2 * s * s5) / (t1 * u1 * u6 * u7) - (2 * m2 * Power(s5, 2)) / (t1 * u1 * u6 * u7) +
       Power(s5, 3) / (t1 * u1 * u6 * u7) - (4 * Power(m2, 2) * t1) / (s3 * u1 * u6 * u7) +
       (m2 * s4 * t1) / (s3 * u1 * u6 * u7) + (2 * m2 * s5 * t1) / (s3 * u1 * u6 * u7) -
       (s4 * s5 * t1) / (2. * s3 * u1 * u6 * u7) - (6 * Power(m2, 2) * tp) / (s3 * u1 * u6 * u7) +
       (2 * m2 * s5 * tp) / (s3 * u1 * u6 * u7) + (Power(s5, 2) * tp) / (2. * s3 * u1 * u6 * u7) +
       (4 * Power(m2, 2) * u1) / (Power(s3, 2) * u6 * u7) + (3 * s4 * u1) / (2. * s3 * u6 * u7) +
       (2 * Power(m2, 2) * u1) / (s3 * t1 * u6 * u7) - (2 * m2 * s4 * u1) / (s3 * t1 * u6 * u7) -
       (m2 * s5 * u1) / (s3 * t1 * u6 * u7) + (s4 * s5 * u1) / (s3 * t1 * u6 * u7) +
       (3 * m2 * tp * u1) / (2. * s * s3 * u6 * u7) + (2 * m2 * tp * u1) / (s3 * t1 * u6 * u7) -
       (s5 * tp * u1) / (2. * s3 * t1 * u6 * u7) + (3 * u6) / (s * u7) -
       (12 * Power(m2, 2) * u6) / (s * Power(s3, 2) * u7) - (12 * m2 * u6) / (s * s3 * u7) +
       (12 * Power(m2, 2) * u6) / (s * s3 * s4 * u7) - (6 * m2 * s4 * u6) / (s * Power(s3, 2) * u7) +
       (3 * s4 * u6) / (s * s3 * u7) - (6 * m2 * s5 * u6) / (s * Power(s3, 2) * u7) - (9 * s5 * u6) / (s * s3 * u7) -
       (3 * s5 * u6) / (s * s4 * u7) - (3 * Power(s5, 2) * u6) / (s * s3 * s4 * u7) -
       (7 * m2 * u6) / (Power(t1, 2) * u7) - (12 * Power(m2, 2) * u6) / (s * Power(t1, 2) * u7) +
       (4 * Power(m2, 2) * u6) / (s4 * Power(t1, 2) * u7) - (6 * m2 * s5 * u6) / (s * Power(t1, 2) * u7) +
       (4 * u6) / (t1 * u7) - (12 * m2 * u6) / (s * t1 * u7) + (15 * m2 * u6) / (2. * s3 * t1 * u7) -
       (24 * Power(m2, 2) * u6) / (s * s3 * t1 * u7) - (9 * m2 * u6) / (2. * s4 * t1 * u7) +
       (12 * Power(m2, 2) * u6) / (s * s4 * t1 * u7) + (2 * Power(m2, 2) * u6) / (s3 * s4 * t1 * u7) +
       (3 * s3 * u6) / (2. * s4 * t1 * u7) - (6 * m2 * s3 * u6) / (s * s4 * t1 * u7) +
       (6 * m2 * s4 * u6) / (s * s3 * t1 * u7) - (9 * s5 * u6) / (s * t1 * u7) - (3 * s5 * u6) / (2. * s3 * t1 * u7) +
       (6 * m2 * s5 * u6) / (s * s3 * t1 * u7) + (s5 * u6) / (s4 * t1 * u7) - (3 * m2 * s5 * u6) / (s * s4 * t1 * u7) +
       (2 * m2 * s5 * u6) / (s3 * s4 * t1 * u7) - (3 * Power(s5, 2) * u6) / (2. * s3 * s4 * t1 * u7) +
       (6 * m2 * tp * u6) / (s * s3 * t1 * u7) - (9 * m2 * tp * u6) / (s * s4 * t1 * u7) -
       (6 * s5 * tp * u6) / (s * s3 * t1 * u7) - (3 * s5 * tp * u6) / (2. * s * s4 * t1 * u7) -
       (4 * Power(m2, 2) * u6) / (s4 * t1 * u1 * u7) + (m2 * s3 * u6) / (s4 * t1 * u1 * u7) +
       (2 * m2 * s5 * u6) / (s4 * t1 * u1 * u7) - (s3 * s5 * u6) / (2. * s4 * t1 * u1 * u7) -
       (6 * m2 * u1 * u6) / (s * Power(s3, 2) * u7) - (9 * u1 * u6) / (2. * s * s3 * u7) -
       (3 * u1 * u6) / (2. * s * s4 * u7) + (3 * m2 * u1 * u6) / (s * s3 * s4 * u7) -
       (3 * s5 * u1 * u6) / (2. * s * s3 * s4 * u7) - (6 * m2 * u1 * u6) / (s * Power(t1, 2) * u7) +
       (6 * Power(m2, 2) * u1 * u6) / (s * s4 * Power(t1, 2) * u7) - (9 * u1 * u6) / (2. * s * t1 * u7) +
       (3 * m2 * u1 * u6) / (s * s3 * t1 * u7) + (9 * m2 * u1 * u6) / (2. * s * s4 * t1 * u7) -
       (2 * m2 * u1 * u6) / (s3 * s4 * t1 * u7) + (6 * Power(m2, 2) * u1 * u6) / (s * s3 * s4 * t1 * u7) -
       (3 * s5 * u1 * u6) / (s * s3 * t1 * u7) + (s5 * u1 * u6) / (s3 * s4 * t1 * u7) -
       (3 * m2 * s5 * u1 * u6) / (s * s3 * s4 * t1 * u7) - (3 * tp * u1 * u6) / (s * s3 * t1 * u7) -
       (3 * tp * u1 * u6) / (2. * s * s4 * t1 * u7) + (3 * m2 * tp * u1 * u6) / (2. * s * s3 * s4 * t1 * u7) +
       (3 * s5 * tp * u1 * u6) / (2. * s * s3 * s4 * t1 * u7) - (6 * m2 * Power(u6, 2)) / (s * Power(t1, 2) * u7) +
       (3 * Power(u6, 2)) / (s * t1 * u7) + (6 * m2 * Power(u6, 2)) / (s * s3 * t1 * u7) -
       (6 * m2 * Power(u6, 2)) / (s * s4 * t1 * u7) + (3 * s3 * Power(u6, 2)) / (2. * s * s4 * t1 * u7) -
       (3 * u1 * Power(u6, 2)) / (2. * s * s4 * t1 * u7) - (3 * m2 * u1 * Power(u6, 2)) / (s * s3 * s4 * t1 * u7) +
       (3 * s5 * u1 * Power(u6, 2)) / (2. * s * s3 * s4 * t1 * u7) - (3 * m2 * u7) / (s * Power(s4, 2)) +
       (3 * m2 * u7) / (s * s3 * s4) - (3 * s5 * u7) / (2. * s * s3 * s4) +
       (2 * Power(m2, 2) * u7) / (Power(s4, 2) * Power(t1, 2)) + (6 * Power(m2, 2) * u7) / (s * Power(s4, 2) * t1) +
       (9 * m2 * u7) / (s * s4 * t1) - (m2 * u7) / (s3 * s4 * t1) - (3 * s5 * u7) / (s * s4 * t1) +
       (s5 * u7) / (s3 * s4 * t1) - (3 * tp * u7) / (2. * s * s4 * t1) - (3 * m2 * tp * u7) / (2. * s * s3 * s4 * t1) -
       (3 * s5 * tp * u7) / (2. * s * s3 * s4 * t1) + (2 * Power(m2, 2) * u7) / (Power(s4, 2) * Power(u1, 2)) +
       (2 * m2 * u7) / (s4 * Power(u1, 2)) - (3 * u7) / (2. * s * u1) - (4 * m2 * u7) / (Power(s4, 2) * u1) +
       (6 * Power(m2, 2) * u7) / (s * Power(s4, 2) * u1) - (2 * u7) / (s4 * u1) + (9 * m2 * u7) / (2. * s * s4 * u1) -
       (3 * s3 * u7) / (2. * s * s4 * u1) + (4 * Power(m2, 2) * u7) / (Power(s4, 2) * t1 * u1) +
       (3 * s3 * u7) / (2. * s4 * t1 * u1) - (3 * t1 * u7) / (2. * s * s3 * u1) -
       (6 * m2 * t1 * u7) / (s * Power(s4, 2) * u1) - (9 * t1 * u7) / (2. * s * s4 * u1) +
       (3 * m2 * t1 * u7) / (s * s3 * s4 * u1) - (3 * s5 * t1 * u7) / (2. * s * s3 * s4 * u1) +
       (9 * m2 * tp * u7) / (2. * s * s3 * s4 * u1) + (3 * m2 * tp * u7) / (2. * s * s4 * t1 * u1) +
       (4 * Power(m2, 2) * u7) / (Power(s3, 2) * Power(u6, 2)) - (m2 * u7) / (s3 * Power(u6, 2)) +
       (6 * Power(m2, 2) * t1 * u7) / (s * Power(s3, 2) * Power(u6, 2)) - (3 * m2 * t1 * u7) / (s * s3 * Power(u6, 2)) +
       (6 * Power(m2, 2) * tp * u7) / (s * Power(s3, 2) * Power(u6, 2)) - (3 * m2 * tp * u7) / (s * s3 * Power(u6, 2)) +
       (2 * Power(m2, 2) * u7) / (Power(u1, 2) * Power(u6, 2)) - (m2 * u7) / (u1 * Power(u6, 2)) +
       (4 * Power(m2, 2) * u7) / (s3 * u1 * Power(u6, 2)) - (6 * m2 * t1 * u7) / (s * u1 * Power(u6, 2)) +
       (6 * Power(m2, 2) * t1 * u7) / (s * s3 * u1 * Power(u6, 2)) - (3 * m2 * u7) / (s * s3 * u6) -
       (3 * m2 * u7) / (s * s4 * u6) + (m2 * u7) / (s3 * s4 * u6) + (12 * Power(m2, 2) * u7) / (s * s3 * s4 * u6) +
       (3 * s5 * u7) / (2. * s * s3 * u6) + (3 * s5 * u7) / (2. * s * s4 * u6) - (s5 * u7) / (s3 * s4 * u6) -
       (12 * m2 * s5 * u7) / (s * s3 * s4 * u6) + (3 * Power(s5, 2) * u7) / (s * s3 * s4 * u6) -
       (m2 * u7) / (s3 * t1 * u6) + (m2 * u7) / (s4 * t1 * u6) + (6 * Power(m2, 2) * u7) / (s3 * s4 * t1 * u6) +
       (s5 * u7) / (2. * s3 * t1 * u6) - (s5 * u7) / (2. * s4 * t1 * u6) - (6 * m2 * s5 * u7) / (s3 * s4 * t1 * u6) +
       (3 * Power(s5, 2) * u7) / (2. * s3 * s4 * t1 * u6) + (3 * m2 * t1 * u7) / (s * Power(s3, 2) * u6) -
       (3 * m2 * t1 * u7) / (s * s3 * s4 * u6) + (3 * s5 * t1 * u7) / (2. * s * s3 * s4 * u6) +
       (3 * m2 * tp * u7) / (s * Power(s3, 2) * u6) - (3 * tp * u7) / (2. * s * s4 * u6) -
       (3 * m2 * tp * u7) / (s * s3 * s4 * u6) + (3 * s5 * tp * u7) / (s * s3 * s4 * u6) +
       (3 * m2 * tp * u7) / (s * s4 * t1 * u6) + (m2 * tp * u7) / (2. * s3 * s4 * t1 * u6) +
       (6 * Power(m2, 2) * tp * u7) / (s * s3 * s4 * t1 * u6) - (3 * s5 * tp * u7) / (2. * s * s4 * t1 * u6) -
       (6 * m2 * s5 * tp * u7) / (s * s3 * s4 * t1 * u6) + (3 * Power(s5, 2) * tp * u7) / (2. * s * s3 * s4 * t1 * u6) +
       (3 * m2 * Power(tp, 2) * u7) / (2. * s * s3 * s4 * t1 * u6) + (2 * m2 * u7) / (Power(u1, 2) * u6) -
       (2 * Power(m2, 2) * u7) / (s4 * Power(u1, 2) * u6) + (2 * m2 * tp * u7) / (s4 * Power(u1, 2) * u6) -
       (2 * u7) / (u1 * u6) + (3 * m2 * u7) / (s * u1 * u6) + (3 * m2 * u7) / (2. * s3 * u1 * u6) +
       (3 * m2 * u7) / (s4 * u1 * u6) + (6 * Power(m2, 2) * u7) / (s * s4 * u1 * u6) +
       (2 * Power(m2, 2) * u7) / (s3 * s4 * u1 * u6) - (3 * m2 * s3 * u7) / (s * s4 * u1 * u6) -
       (3 * s5 * u7) / (2. * s * u1 * u6) - (2 * s5 * u7) / (s4 * u1 * u6) - (3 * m2 * s5 * u7) / (s * s4 * u1 * u6) -
       (m2 * s5 * u7) / (s3 * s4 * u1 * u6) + (3 * s3 * s5 * u7) / (2. * s * s4 * u1 * u6) +
       (2 * Power(m2, 2) * u7) / (s4 * t1 * u1 * u6) - (2 * m2 * s3 * u7) / (s4 * t1 * u1 * u6) -
       (m2 * s5 * u7) / (s4 * t1 * u1 * u6) + (s3 * s5 * u7) / (s4 * t1 * u1 * u6) -
       (9 * t1 * u7) / (2. * s * u1 * u6) + (9 * m2 * t1 * u7) / (2. * s * s3 * u1 * u6) +
       (3 * m2 * t1 * u7) / (s * s4 * u1 * u6) - (2 * m2 * t1 * u7) / (s3 * s4 * u1 * u6) +
       (6 * Power(m2, 2) * t1 * u7) / (s * s3 * s4 * u1 * u6) - (3 * s5 * t1 * u7) / (s * s4 * u1 * u6) +
       (s5 * t1 * u7) / (s3 * s4 * u1 * u6) - (3 * m2 * s5 * t1 * u7) / (s * s3 * s4 * u1 * u6) -
       (3 * Power(t1, 2) * u7) / (2. * s * s3 * u1 * u6) - (3 * m2 * Power(t1, 2) * u7) / (s * s3 * s4 * u1 * u6) +
       (3 * s5 * Power(t1, 2) * u7) / (2. * s * s3 * s4 * u1 * u6) - (tp * u7) / (s4 * u1 * u6) +
       (3 * m2 * tp * u7) / (2. * s * s4 * u1 * u6) + (2 * m2 * tp * u7) / (s3 * s4 * u1 * u6) +
       (3 * s5 * tp * u7) / (2. * s * s4 * u1 * u6) + (s5 * tp * u7) / (s3 * s4 * u1 * u6) +
       (2 * m2 * tp * u7) / (s4 * t1 * u1 * u6) - (s5 * tp * u7) / (2. * s4 * t1 * u1 * u6) -
       (3 * t1 * tp * u7) / (2. * s * s3 * u1 * u6) - (3 * t1 * tp * u7) / (s * s4 * u1 * u6) +
       (3 * m2 * t1 * tp * u7) / (2. * s * s3 * s4 * u1 * u6) + (3 * s5 * t1 * tp * u7) / (2. * s * s3 * s4 * u1 * u6) +
       (3 * tp * Power(u7, 2)) / (2. * s * s4 * u1 * u6) + (3 * m2 * tp * Power(u7, 2)) / (2. * s * s3 * s4 * u1 * u6) -
       (3 * m2 * up) / (s * Power(s3, 2)) + (3 * up) / (2. * s * s3) - (3 * m2 * up) / (s * Power(s4, 2)) +
       (3 * up) / (2. * s * s4) + (6 * m2 * up) / (s * s3 * s4) - (6 * s5 * up) / (s * s3 * s4) +
       (2 * Power(m2, 2) * up) / (Power(s4, 2) * Power(t1, 2)) - (m2 * up) / (s4 * Power(t1, 2)) +
       (6 * Power(m2, 2) * up) / (s * Power(s4, 2) * t1) - (3 * m2 * up) / (s * s4 * t1) - (m2 * up) / (s3 * s4 * t1) +
       (6 * Power(m2, 2) * up) / (s * s3 * s4 * t1) + (3 * s5 * up) / (2. * s * s4 * t1) -
       (6 * m2 * s5 * up) / (s * s3 * s4 * t1) + (3 * Power(s5, 2) * up) / (2. * s * s3 * s4 * t1) -
       (3 * m2 * tp * up) / (2. * s * s3 * s4 * t1) + (2 * Power(m2, 2) * up) / (Power(s4, 2) * Power(u1, 2)) -
       (m2 * up) / (s4 * Power(u1, 2)) - (4 * m2 * up) / (Power(s4, 2) * u1) +
       (6 * Power(m2, 2) * up) / (s * Power(s4, 2) * u1) + (2 * up) / (s4 * u1) - (3 * m2 * up) / (2. * s * s4 * u1) -
       (4 * m2 * up) / (s3 * s4 * u1) + (4 * Power(m2, 2) * up) / (Power(s4, 2) * t1 * u1) -
       (3 * m2 * up) / (s4 * t1 * u1) - (s5 * up) / (s4 * t1 * u1) + (3 * t1 * up) / (2. * s * s3 * u1) -
       (6 * m2 * t1 * up) / (s * Power(s4, 2) * u1) + (3 * t1 * up) / (s * s4 * u1) -
       (3 * s5 * t1 * up) / (2. * s * s3 * s4 * u1) + (2 * Power(m2, 2) * up) / (Power(s3, 2) * Power(u6, 2)) -
       (m2 * up) / (s3 * Power(u6, 2)) - (2 * Power(m2, 2) * up) / (s3 * u1 * Power(u6, 2)) -
       (m2 * s5 * up) / (s3 * u1 * Power(u6, 2)) - (4 * m2 * t1 * up) / (s3 * u1 * Power(u6, 2)) -
       (6 * Power(m2, 2) * t1 * up) / (s * s3 * u1 * Power(u6, 2)) -
       (3 * m2 * s5 * t1 * up) / (s * s3 * u1 * Power(u6, 2)) -
       (3 * m2 * Power(t1, 2) * up) / (s * s3 * u1 * Power(u6, 2)) + (6 * Power(m2, 2) * up) / (s * Power(s3, 2) * u6) -
       (3 * m2 * up) / (s * s3 * u6) - (m2 * up) / (s3 * s4 * u6) + (6 * Power(m2, 2) * up) / (s * s3 * s4 * u6) +
       (3 * s5 * up) / (2. * s * s3 * u6) - (6 * m2 * s5 * up) / (s * s3 * s4 * u6) +
       (3 * Power(s5, 2) * up) / (2. * s * s3 * s4 * u6) + (8 * Power(m2, 2) * up) / (s3 * s4 * t1 * u6) -
       (6 * m2 * s5 * up) / (s3 * s4 * t1 * u6) + (Power(s5, 2) * up) / (s3 * s4 * t1 * u6) +
       (3 * t1 * up) / (2. * s * s3 * u6) + (3 * m2 * t1 * up) / (2. * s * s3 * s4 * u6) +
       (3 * s5 * t1 * up) / (2. * s * s3 * s4 * u6) - (3 * m2 * tp * up) / (2. * s * s3 * s4 * u6) +
       (m2 * tp * up) / (s3 * s4 * t1 * u6) + (12 * Power(m2, 2) * tp * up) / (s * s3 * s4 * t1 * u6) -
       (6 * m2 * s5 * tp * up) / (s * s3 * s4 * t1 * u6) - (2 * Power(m2, 2) * up) / (s4 * Power(u1, 2) * u6) -
       (7 * m2 * up) / (2. * s3 * u1 * u6) + (9 * m2 * up) / (2. * s4 * u1 * u6) +
       (6 * Power(m2, 2) * up) / (s * s4 * u1 * u6) - (s5 * up) / (s4 * u1 * u6) -
       (3 * m2 * s5 * up) / (s3 * s4 * u1 * u6) - (3 * Power(s5, 2) * up) / (2. * s * s4 * u1 * u6) +
       (Power(s5, 2) * up) / (s3 * s4 * u1 * u6) + (2 * m2 * s5 * up) / (s4 * t1 * u1 * u6) -
       (Power(s5, 2) * up) / (s4 * t1 * u1 * u6) + (2 * t1 * up) / (s3 * u1 * u6) -
       (21 * m2 * t1 * up) / (2. * s * s3 * u1 * u6) + (9 * m2 * t1 * up) / (2. * s * s4 * u1 * u6) -
       (m2 * t1 * up) / (s3 * s4 * u1 * u6) - (6 * Power(m2, 2) * t1 * up) / (s * s3 * s4 * u1 * u6) -
       (3 * s5 * t1 * up) / (2. * s * s4 * u1 * u6) + (s5 * t1 * up) / (s3 * s4 * u1 * u6) -
       (3 * m2 * s5 * t1 * up) / (s * s3 * s4 * u1 * u6) + (3 * Power(s5, 2) * t1 * up) / (2. * s * s3 * s4 * u1 * u6) +
       (3 * Power(t1, 2) * up) / (2. * s * s3 * u1 * u6) - (3 * m2 * Power(t1, 2) * up) / (2. * s * s3 * s4 * u1 * u6) +
       (3 * s5 * Power(t1, 2) * up) / (2. * s * s3 * s4 * u1 * u6) + (3 * u6 * up) / (2. * s * s4 * t1) +
       (3 * m2 * u6 * up) / (2. * s * s3 * s4 * t1) + (3 * s5 * u6 * up) / (2. * s * s3 * s4 * t1) -
       (9 * m2 * u6 * up) / (2. * s * s3 * s4 * u1) - (3 * m2 * u6 * up) / (2. * s * s4 * t1 * u1) +
       (2 * Power(m2, 2) * up) / (Power(s3, 2) * Power(u7, 2)) - (m2 * up) / (s3 * Power(u7, 2)) -
       (2 * Power(m2, 2) * up) / (s3 * t1 * Power(u7, 2)) - (4 * m2 * up) / (Power(s3, 2) * u7) +
       (6 * Power(m2, 2) * up) / (s * Power(s3, 2) * u7) + (2 * up) / (s3 * u7) - (3 * m2 * up) / (2. * s * s3 * u7) -
       (4 * m2 * up) / (s3 * s4 * u7) - (2 * Power(m2, 2) * up) / (s4 * Power(t1, 2) * u7) -
       (m2 * s5 * up) / (s4 * Power(t1, 2) * u7) + (9 * m2 * up) / (2. * s3 * t1 * u7) +
       (6 * Power(m2, 2) * up) / (s * s3 * t1 * u7) - (7 * m2 * up) / (2. * s4 * t1 * u7) - (s5 * up) / (s3 * t1 * u7) -
       (3 * m2 * s5 * up) / (s3 * s4 * t1 * u7) - (3 * Power(s5, 2) * up) / (2. * s * s3 * t1 * u7) +
       (Power(s5, 2) * up) / (s3 * s4 * t1 * u7) - (9 * m2 * t1 * up) / (2. * s * s3 * s4 * u7) +
       (m2 * up) / (2. * s3 * u1 * u7) + (m2 * up) / (2. * s4 * u1 * u7) +
       (8 * Power(m2, 2) * up) / (s3 * s4 * u1 * u7) - (m2 * s5 * up) / (s3 * s4 * u1 * u7) +
       (3 * m2 * s5 * up) / (2. * s4 * t1 * u1 * u7) - (Power(s5, 2) * up) / (2. * s4 * t1 * u1 * u7) -
       (3 * u1 * up) / (2. * s * s3 * u7) - (3 * m2 * u1 * up) / (2. * s * s3 * s4 * u7) -
       (3 * m2 * tp * u1 * up) / (2. * s * s3 * s4 * t1 * u7) + (4 * Power(m2, 2) * up) / (Power(s3, 2) * u6 * u7) -
       (3 * m2 * up) / (s3 * u6 * u7) - (s5 * up) / (s3 * u6 * u7) + (2 * m2 * s5 * up) / (s3 * t1 * u6 * u7) -
       (Power(s5, 2) * up) / (s3 * t1 * u6 * u7) - (3 * m2 * t1 * up) / (2. * s * s3 * u6 * u7) +
       (3 * m2 * s5 * up) / (2. * s3 * u1 * u6 * u7) - (Power(s5, 2) * up) / (2. * s3 * u1 * u6 * u7) +
       (m2 * t1 * up) / (2. * s3 * u1 * u6 * u7) - (s5 * t1 * up) / (2. * s3 * u1 * u6 * u7) -
       (6 * m2 * u6 * up) / (s * Power(s3, 2) * u7) + (3 * u6 * up) / (s * s3 * u7) +
       (3 * u6 * up) / (2. * s * s4 * u7) - (3 * s5 * u6 * up) / (2. * s * s3 * s4 * u7) -
       (4 * m2 * u6 * up) / (s4 * Power(t1, 2) * u7) - (6 * Power(m2, 2) * u6 * up) / (s * s4 * Power(t1, 2) * u7) -
       (3 * m2 * s5 * u6 * up) / (s * s4 * Power(t1, 2) * u7) + (9 * m2 * u6 * up) / (2. * s * s3 * t1 * u7) +
       (2 * u6 * up) / (s4 * t1 * u7) - (21 * m2 * u6 * up) / (2. * s * s4 * t1 * u7) -
       (m2 * u6 * up) / (s3 * s4 * t1 * u7) - (6 * Power(m2, 2) * u6 * up) / (s * s3 * s4 * t1 * u7) -
       (3 * s5 * u6 * up) / (2. * s * s3 * t1 * u7) + (s5 * u6 * up) / (s3 * s4 * t1 * u7) -
       (3 * m2 * s5 * u6 * up) / (s * s3 * s4 * t1 * u7) + (3 * Power(s5, 2) * u6 * up) / (2. * s * s3 * s4 * t1 * u7) +
       (m2 * u6 * up) / (2. * s4 * t1 * u1 * u7) - (s5 * u6 * up) / (2. * s4 * t1 * u1 * u7) -
       (3 * m2 * u1 * u6 * up) / (s * s4 * Power(t1, 2) * u7) -
       (3 * m2 * Power(u6, 2) * up) / (s * s4 * Power(t1, 2) * u7) + (3 * Power(u6, 2) * up) / (2. * s * s4 * t1 * u7) -
       (3 * m2 * Power(u6, 2) * up) / (2. * s * s3 * s4 * t1 * u7) +
       (3 * s5 * Power(u6, 2) * up) / (2. * s * s3 * s4 * t1 * u7) - (3 * u7 * up) / (2. * s * s4 * u1) -
       (3 * m2 * u7 * up) / (2. * s * s3 * s4 * u1) - (3 * m2 * t1 * u7 * up) / (s * s3 * u1 * Power(u6, 2)) -
       (3 * m2 * tp * u7 * up) / (2. * s * s3 * s4 * u1 * u6) + (3 * m2 * Power(up, 2)) / (2. * s * s3 * s4 * u1) +
       (3 * m2 * Power(up, 2)) / (2. * s * s3 * s4 * u7) + (m2 * Power(up, 2)) / (s3 * s4 * u1 * u7));
}
}  // namespace ME
}  // namespace ProHQinUPC
