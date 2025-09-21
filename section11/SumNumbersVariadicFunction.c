// Write a program that creates a variadic function that will allow a programmer
// to add any amount of numbers (integers) that they would like to be added together

#include <stdio.h>
#include <stdarg.h>

int addNumbers(int amountNumbers, ...);

int main(int argc, char const *argv[])
{
    int sum = addNumbers(6, 1, 2, 3, 4, 5, 1000);
    printf("Numbers added using variadic functions is: %i", sum);

    return 0;
}

int addNumbers(int amountNumbers, ...){

    va_list varArgs;
    va_start(varArgs, amountNumbers);

    int sum = 0;

    for (int i = 0; i < amountNumbers; i++)
    {
        sum += va_arg(varArgs, int);
    }

    va_end(varArgs);

    return sum;

}
