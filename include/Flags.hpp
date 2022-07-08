#ifndef PROHQINUPC_INCLUDE_FLAGS_HPP_
#define PROHQINUPC_INCLUDE_FLAGS_HPP_

namespace ProHQinUPC {

/**
 * @class Flags
 * @brief controls active channels and orders
 */
struct Flags {
  /** @name partonic channels: gluon, light quark */
  ///@{
  /** @brief use gluonic initial state? */
  bool useGluonicChannel = true;

  /** @brief use light quark initial state? */
  bool useQuarkChannel = true;
  ///@}

  /** @name computing orders = number of loops */
  ///@{
  /** @brief use leading order calculations? */
  bool useLeadingOrder = true;

  /** @brief use (pure) next-to-leading order calculations? */
  bool useNextToLeadingOrder = true;
  ///@}

  /**
   * @brief constructor
   * @param useGluonicChannel use gluonic initial state?
   * @param useQuarkChannel use light quark initial state?
   * @param useLeadingOrder use leading order calculations?
   * @param useNextToLeadingOrder use (pure) next-to-leading order calculations?
   */
  Flags(bool useGluonicChannel, bool useQuarkChannel, bool useLeadingOrder, bool useNextToLeadingOrder, bool usePhoton,
        bool usePhotonZ, bool useZ)
      : useGluonicChannel(useGluonicChannel),
        useQuarkChannel(useQuarkChannel),
        useLeadingOrder(useLeadingOrder),
        useNextToLeadingOrder(useNextToLeadingOrder) {}
};

}  // namespace ProHQinUPC

#endif  // PROHQINUPC_INCLUDE_FLAGS_HPP_
