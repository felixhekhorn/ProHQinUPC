#include <iomanip>
#include <iostream>

#include "./Integration.hpp"
#include "./ME.h"
#include "./PhasespacePoint.h"
#include "./ProHQinUPC.h"
#include "./config-buildtime.hpp"
#include "./config.h"

using ProHQinUPC::cdbl;
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
    /*// test matrix element
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
    cout << "int = " << ProHQinUPC::integrate(&t, 1, ic, &io) << endl;*/
    // Run actual application
    cdbl xTilde = .8;
    cdbl omega = 1.;
    cdbl deltax = 1e-6;
    cdbl deltay = 7e-6;
    ProHQinUPC::ProHQinUPC app(3, 2.25, xTilde, omega, deltax, deltay);
    app.setHadronicS(100.);
    // app.flags().useGluonicChannel = false;
    app.setPdf("NNPDF40_nnlo_as_01180", 0);
    cout << "sigma = " << app.sigma() << endl;
  } catch (const std::exception& e) {
    cout << "Hoppala, an exception got raised ..." << endl << e.what() << endl;
  }

  return EXIT_SUCCESS;
}
