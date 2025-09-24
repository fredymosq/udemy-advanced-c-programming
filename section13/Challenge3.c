// Write a program to find the square and cube of a number using macros

#include <stdio.h>
#include <math.h>

#define SQUARE(number) (sqrt(number))
#define CUBE(number) (pow(number, 3))

int main(int argc, char const *argv[])
{
    int number = 0;
    printf("Enter a number: ");
    scanf("%i", &number);

    int squareRoot = SQUARE(number);
    int cube = CUBE(number);

    printf("Square root of %i = %i", number, squareRoot);
    printf("\nCube of %i =%i", number, cube);

    return 0;
}
