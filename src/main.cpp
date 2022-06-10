#include <iomanip>
#include <iostream>

#include "./ME.h"
#include "./config-buildtime.hpp"
#include "PhasespacePoint.h"

using ::std::cout;
using ::std::endl;

/**
 * @brief CLI entry point
 * @param argc number of arguments
 * @param argv CLI arguments
 */
int main(int argc, char** argv) {
  try {
    cout << ProHQinUPC::ME::BQED(1., 7., -.3) << endl;
    ProHQinUPC::PhasespacePoint p(1., 100.);
    p.setupLO(.5, .3);
    cout << p.getP1() << endl;
  } catch (const std::exception& e) {
    cout << "Hoppala, an exception got raised ..." << endl << e.what();
  }

  return EXIT_SUCCESS;
}
