# clabox

This is a basic demonstration of how arbitrary projects can compile and link against the CLAPACK library, as referenced via system install from the following repository:

https://github.com/Tythos/clapack

This specific program (e.g., `main.c`) is taken from the example in the official CLAPACK FAQ:

https://www.netlib.org/clapack/faq.html

If you have successfully built & installed the CLAPACK project on your system, you should be able to build and run this project fairly easily:

```sh
> cmake -S . -B build
> cmake --build build
> build/Debug/clabox.exe
```

(The final path used in these commands assumes a MSVC build; modify your final artifact executable location accordingly if using a different generator / toolchain.)
