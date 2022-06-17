#include "./ProHQinUPC.h"

using std::domain_error;

namespace ProHQinUPC {

IntegrationKernel::IntegrationKernel(cuint nlf, cdbl m2) : nlf(nlf), m2(m2) {}

void IntegrationKernel::operator()(const double x[], const int k[],
                                   const double& weight, const double aux[],
                                   double f[]) {
  f[0] = x[0];
}

void IntegrationKernel::Dvegas_init() const {}

void IntegrationKernel::Dvegas_final(cuint iterations) const {}

}  // namespace ProHQinUPC
