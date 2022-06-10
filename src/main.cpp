#include <iostream>
#include <iomanip>

#include "ME.h"

#include "config-buildtime.hpp"

using namespace std;

/**
 * @brief program entry point
 */
int main(int argc, char **argv) {
    try {
        cout << ME::BQED(1.,7.,-.3) << endl;
    } catch(const std::exception& e) {
        cout << "Hoppala, an exception got raised ..." << endl << e.what();
    }
    
    return EXIT_SUCCESS;
}
