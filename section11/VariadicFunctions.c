
#include <stdio.h>
#include <stdarg.h>

double average(double number1, double number2, ...);

int main(int argc, char const *argv[])
{
    double number1 = 10.5;
    double number2 = 2.5;
    int num1 = 6;
    int num2 = 5;
    long num3 = 12L;
    long num4 = 20L;

    printf("Average = %.2f\n", average(number1, 3.5, number2, 4.5, 0.0));
    printf("Average = %.2f\n", average(1.0, 2.0, 0.0));

    return 0;
}


double average(double number1, double number2, ...){
    va_list parg;
    double sum = number1 + number2;
    double value = 0.0;

    int count = 2;

    va_start(parg, number2);

    while ((value = va_arg(parg, double)) != 0.0)
    {
        sum += value;
        count++;
    }

    va_end(parg);

    return sum / count;
    
}
