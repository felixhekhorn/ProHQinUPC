#include <iomanip>
#include <iostream>

#include "./Integration.hpp"
#include "./ME.h"
#include "./PhasespacePoint.h"
#include "./config-buildtime.hpp"

using std::cout;
using std::endl;

struct test : HepSource::Integrand {
  void Dvegas_init() {}
  void Dvegas_final(int a) {}
  void operator()(const double x[], const int k[], const double& weight,
                  const double aux[], double f[]) {
    f[0] = x[0];
  }
};

/**
 * @brief CLI entry point
 * @param argc number of arguments
 * @param argv CLI arguments
 */
int main(int argc, char** argv) {
  try {
    // test matrix element
    cout << ProHQinUPC::ME::BQED(1., 7., -.3) << endl;
    // test phase space
    ProHQinUPC::PhasespacePoint p(1., 100.);
    p.setupLO(.5, .3);
    cout << p.getP1() << endl;
    // test integration
    test t;
    ProHQinUPC::IntegrationConfig ic;
    ic.calls = 100;
    ic.MC_warmupCalls = 100;
    ProHQinUPC::IntegrationOutput io;
    cout << "int = " << ProHQinUPC::integrate(&t, 1, ic, &io) << endl;
  } catch (const std::exception& e) {
    cout << "Hoppala, an exception got raised ..." << endl << e.what();
  }

  return EXIT_SUCCESS;
}
