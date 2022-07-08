#ifndef PROHQINUPC_INCLUDE_HISTT_HPP_
#define PROHQINUPC_INCLUDE_HISTT_HPP_

#include <unordered_map>

#include "./gslpp/gslpp.Histogram.hpp"

namespace ProHQinUPC {

/** @brief histogram types */
enum histT {
  HAQRapidity,                  /**< -y0 < HAQRapidity < y0 where y0 = artanh(sqrt(1-4m2/S)) */
  HAQTransverseMomentum,        /**< 0 < HAQTransverseMomentum < sqrt(S/4-m2) */
  HAQTransverseMomentumScaling, /**< 0 < HAQTransverseMomentumScaling < 1 */
  HAQFeynmanX,                  /**< -1 < HAQFeynmanX < 1 */
};

/** @brief shorthand for map of histograms */
typedef std::unordered_map<histT, gslpp::Histogram*> histMapT;

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_HISTT_HPP_
