/**
 * @file IntegrationMeta.hpp
 * @brief defines meta classes for integration routines
 */

#ifndef PROHQINUPC_INCLUDE_INTEGRATIONMETA_HPP_
#define PROHQINUPC_INCLUDE_INTEGRATIONMETA_HPP_

#include "./config.h"

namespace ProHQinUPC {

/**
 * @class IntegrationConfig
 * @brief configurates a single integration
 */
struct IntegrationConfig {
  /** @name common variables */
  ///@{
  /** @brief used integration method */
  str method;

  /** @brief level of output */
  int verbosity = 0;

  /** @brief calls */
  size_t calls = 0;
  ///@}

  /** @name Monte Carlo variables */
  ///@{
  /** @brief calls for warmup */
  size_t MC_warmupCalls = 0;

  /** @brief iterations */
  uint MC_iterations = 5;

  /** @brief iterations during warmup */
  uint MC_warmupIterations = 5;

  /** @brief iterate until |chi2-1| < 0.5? */
  bool MC_adaptChi2 = true;
  ///@}

  /** @name variables for Dvegas */
  ///@{
  /** @brief number of bins */
  uint Dvegas_bins = 250;
  ///@}
};

/**
 * @class IntegrationOutput
 * @brief stores meta data for a single integration
 */
struct IntegrationOutput {
  /** @name common variables */
  ///@{
  /** @brief result */
  dbl result = 0;
  /** @brief (absolute) error */
  dbl error = 0;
  ///@}

  /** @name Monte Carlo variables */
  ///@{
  /** @brief chi^2 */
  dbl MC_chi2 = 0;
  /** @brief number of iteration to converge chi^2 */
  uint MC_chi2inter = 0;
  ///@}

  /**
   * @brief constructor
   * @param result result
   * @param error (absolute) error
   * @param MC_chi2 chi^2
   * @param MC_chi2inter number of iteration to converge chi^2
   */
  IntegrationOutput(cdbl result = 0, cdbl error = 0, cdbl MC_chi2 = 0,
                    cuint MC_chi2inter = 0)
      : result(result),
        error(error),
        MC_chi2(MC_chi2),
        MC_chi2inter(MC_chi2inter) {}
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_INTEGRATIONMETA_HPP_
