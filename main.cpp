/**
 * main.cpp
 */

#include <iostream>
#include "f2c.h"
#include "blaswrap.h"
#include "clapack.h"

int main(int nArgs, char** vArgs) {
    long int n = 0;
    long int incx = 0;
    long int incy = 0;
    float sx = 0.0;
    float sy = 0.0;
    double out = sdot_(&n, &sx, &incx, &sy, &incy);
    std::cout << "output: " << out << std::endl;
    return 0;
}
