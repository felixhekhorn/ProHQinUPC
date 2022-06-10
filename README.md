# ProHQinUPC

Production of Heavy Quark (HQ) in Ultra Peripheral Collisions (UPC).

## Build and Run the Project

We use the [meson build system](https://mesonbuild.com/) so to compile the code execute

```sh
meson setup builddir
meson compile -C builddir
```

and the to launch the program execute the generated executable: `./builddir/src/ProHQinUPC`
