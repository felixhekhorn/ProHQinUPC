/**
 * @file Integration.hpp
 * @brief defines the integration routine
 */

#ifndef PROHQINUPC_SRC_INTEGRATION_HPP_
#define PROHQINUPC_SRC_INTEGRATION_HPP_

#include <dvegas.h>

#include "./IntegrationMeta.hpp"
#include "./config.h"

namespace ProHQinUPC {

/**
 * @brief integrates the kernel in dim dimensions
 * @tparam IntKerT integration kernel type (functor)
 * @param K kernel
 * @param dim number of dimensions
 * @param cfg config
 * @param out output of meta data
 * @return \f$\int\limits_0^1 f(\vec a)\,da_1\dots da_n\f$
 */
template <class IntKerT>
cdbl integrate(IntKerT* K, cuint dim, const IntegrationConfig& cfg,
               IntegrationOutput* out) {
  HepSource::Dvegas dv(dim, cfg.Dvegas_bins, 1, *K);
  /** @todo activate correlation between z and x?
   * -> Dvegas dv(dim,cfg.Dvegas_bins,2,{},0,1,F); */
  double res, err;
  // clear histograms
  K->Dvegas_init();
  // warm-up - catch eventually zero kernel
  try {
    HepSource::VEGAS(dv, cfg.MC_warmupCalls, cfg.MC_warmupIterations, 0,
                     cfg.verbosity - 3);
  } catch (std::domain_error& e) {
    out->result = 0;
    out->error = 0;
    out->MC_chi2 = 0;
    out->MC_chi2inter = 0;
    return 0.;
  }
  HepSource::IntegrandEstimate e = dv.stats(0);
  res = e.integral();
  uint guard = 0;
  out->result = dblNaN;
  out->error = dblNaN;
  out->MC_chi2 = dblNaN;
  out->MC_chi2inter = 0;
  // run
  if (cfg.MC_adaptChi2) {  // adapt chi
    do {
      if (!std::isfinite(res)) return res;
      K->Dvegas_init();
      HepSource::VEGAS(dv, cfg.calls, cfg.MC_iterations, 1, cfg.verbosity - 2);
      e = dv.stats(0);
      res = e.integral();
      err = e.standardDeviation();
      if (cfg.verbosity > 1)
        std::printf(
            "[INFO] int%dD(Dvegas): [%d] % e ± %.3e (%.3f%%) chi2/it: %.3f\n",
            dim, guard, res, err, fabs(err / res * 1e2),
            e.chiSquarePerIteration());
    } while (fabs(e.chiSquarePerIteration() - 1.0) > 0.5 && ++guard < 15);
  } else { /* simple run */
    K->Dvegas_init();
    HepSource::VEGAS(dv, cfg.calls, cfg.MC_iterations, 1, cfg.verbosity - 2);
    e = dv.stats(0);
    res = e.integral();
    err = e.standardDeviation();
  }
  K->Dvegas_final(cfg.MC_iterations);
  if (1 == cfg.verbosity)
    std::printf(
        "[INFO] int%dD(Dvegas): [%d] % e ± %.3e (%.3f%%) chi2/it: %.3f\n", dim,
        guard, res, err, fabs(err / res * 1e2), e.chiSquarePerIteration());
  out->result = res;
  out->error = err;
  out->MC_chi2 = e.chiSquarePerIteration();
  out->MC_chi2inter = guard;
  return res;
}

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_SRC_INTEGRATION_HPP_
