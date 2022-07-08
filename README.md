# ProHQinUPC

Production of Heavy Quark (HQ) in Ultra Peripheral Collisions (UPC).

This is a sister project of [LeProHQ](https://github.com/felixhekhorn/LeProHQ).

## Build and Run the Project

We use the [meson build system](https://mesonbuild.com/). Make sure to have all external dependencies listed below available on your system.

First, to compile the code run

```sh
meson setup builddir
meson compile -C builddir
```

Next, to launch the program run the generated executable: `./builddir/src/ProHQinUPC`

### External Dependencies
- [gsl](https://www.gnu.org/software/gsl/) >= 2.7
- [Relativistic Kinematics (RK)](https://rk.hepforge.org/) >= 1.7
- [Dvegas](https://dvegas.hepforge.org/) >= 2.0.3 with patched [`dvegas.h`](https://github.com/felixhekhorn/LeProHQ/blob/main/Patches/dvegas.h.patch) and [`dvegas.cpp`](https://github.com/felixhekhorn/LeProHQ/blob/main/Patches/dvegas.cpp.patch)
- [boost](https://www.boost.org/) >= 1.74 - used modules are `filesystem` and the headers for `format.hpp`
- [lhapdf](https://lhapdf.hepforge.org/) >= 6.4

## Contributing
- Your feedback is welcome! If you want to report a (possible) bug or want to ask for a new feature, please raise an issue: <a href="https://github.com/felixhekhorn/ProHQinUPC/issues"><img alt="GitHub issues" src="https://img.shields.io/github/issues/felixhekhorn/ProHQinUPC"/></a>
- Please follow our [Code of Conduct](https://github.com/felixhekhorn/ProHQinUPC/blob/main/.github/CODE_OF_CONDUCT.md) and read the
  [Contribution Guidelines](https://github.com/felixhekhorn/ProHQinUPC/blob/main/.github/CONTRIBUTING.md)
