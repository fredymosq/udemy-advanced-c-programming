#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(int argc, char const *argv[])
{
    double complex z1 = I * I; //Imaginary unit square;
    double complex z2 = pow(I, 2);

    printf("I * I = %.1f%+.1fi\n", creal(z1), cimag(z1));
    printf("pow(I, 2) = %.1f%+.1fi\n", creal(z2), cimag(z2));


    return 0;
}
