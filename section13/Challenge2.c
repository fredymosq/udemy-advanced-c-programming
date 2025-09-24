// Write a program that defines a macro that accepts
// two parameters and returns the sum of the given numbers

#include <stdio.h>

#define SUM(number1, number2) (number1 + number2)

int main(int argc, char const *argv[])
{
    int num1 = 50;
    int num2 = 100;
    int sum = SUM(num1, num2);

    printf("The sum of %i + %i = %i", num1, num2, sum);

    return 0;
}
