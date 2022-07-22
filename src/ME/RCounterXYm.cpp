#include "../ME.h"
#include "./Consts.hpp"

namespace ProHQinUPC {
namespace ME {
cdbl RCounterXYm(cdbl m2, cdbl s, cdbl t1) { return 4. * Color::CA * BQED(m2, s, t1); }
}  // namespace ME
}  // namespace ProHQinUPC
