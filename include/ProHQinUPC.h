#ifndef PROHQINUPC_INCLUDE_PROHQINUPC_H_
#define PROHQINUPC_INCLUDE_PROHQINUPC_H_

#include "./IntegrationKernel.h"
#include "./IntegrationMeta.hpp"
#include "./config.h"

namespace ProHQinUPC {

class ProHQinUPC {
  /** @brief integration kernel */
  IntegrationKernel* ker;

  /** @brief LO IntegrationConfig */
  IntegrationConfig intConfLO;

  /** @brief current (last) IntegrationOutput */
  IntegrationOutput* intOut;

  /** @brief setup all active histograms */
  void setupHistograms() const;

 public:
  /**
   * @brief constructor
   * @param nlf number of light flavours
   * @param m2 mass^2 of heavy flavours
   * @param xTilde factor to soft regulation parameter \f$\tilde\rho = 1-\tilde
   * x(1-\rho^*) \f$
   * @param omega collinear regulation parameter \f$\omega\f$
   * @param deltax offset to upper integration bound in x \f$\delta_x \f$
   * @param deltay offset to lower integration bound in y \f$\delta_y \f$
   */
  ProHQinUPC(cuint nlf, cdbl m2, cdbl xTilde, cdbl omega, cdbl deltax,
             cdbl deltay);

  /** @brief destructor */
  ~ProHQinUPC();

  /** @name global getter and setter */
  ///@{

  /**
   * @brief sets xTilde
   * @param xTilde factor to soft regulation parameter \f$\tilde\rho = 1-\tilde
   * x(1-\rho^*)\f$
   */
  void setXTilde(cdbl xTilde) const;

  /**
   * @brief sets omega
   * @param omega collinear regulation parameter \f$\omega\f$
   */
  void setOmega(cdbl omega) const;

  /**
   * @brief sets deltax
   * @param deltax upper integration bound in x
   */
  void setDeltax(cdbl deltax) const;

  /**
   * @brief sets deltay
   * @param deltay lower integration bound in y
   */
  void setDeltay(cdbl deltay) const;

  /**
   * @brief manipulate controlling flags
   * @return controlling flags
   */
  inline Flags& flags() const { return this->ker->flags; }

  ///@}

  /** @name hadronic setter */
  ///@{

  /**
   * @brief sets electro-magnetic coupling constant
   * @param alphaEM electro-magnetic coupling constant
   */
  void setAlphaEM(cdbl alphaEM) const;

  /**
   * @brief sets hadronic \f$S_h = (p + q)^2 \f$
   * @param Sh hadronic S
   */
  void setHadronicS(cdbl Sh) const;

  /**
   * @brief sets PDF
   * @param name LHAPDF/ported name
   * @param member (LHAPDF) member index
   * @see LHAPDF::mkPDF()
   */
  void setPdf(const str& name, const int member) const;

  /**
   * @brief activates a histogram
   * @param t histogram type
   * @param size number of bins
   * @param path file path
   * @param min optional min value (will be bined uniformly to max)
   * @param max optional max value (will be bined uniformly from min)
   * @param useLog use logarthmic spacing for optional values
   */
  void activateHistogram(const histT t, cuint size, const str& path,
                         cdbl min = dblNaN, cdbl max = dblNaN,
                         const bool useLog = false);

  ///@}

  /** @brief compute cross section */
  cdbl sigma() const;
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_PROHQINUPC_H_
