#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent) {
    int result = base;
    if (exponent == 0) return 1;
    for (int i = 0; i < exponent; ++i) {
        result = result * base;
    }
    return result;
}

int main(int argc, char* argv[]) {
    double result = power(3,5);
    printf("result is %g\n", result);
    return 0;
}