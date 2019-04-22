#include <stdio.h>
#include <stdlib.h>
#include "config.h"

#ifdef USE_MATH
#include "math/power.h"
#else
#endif


int main(int argc, char* argv[]) {
    double result = power(3,5);
    printf("result is %g\n", result);
    return 0;
}