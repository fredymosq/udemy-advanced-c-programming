// Write a program which will calculate the sum of numbers from 1 to n
// using recursion

#include <stdio.h>

int addNumbers(int n);
int findGCD(int number1, int number2);

int main(int argc, char const *argv[])
{
    int n = 5;
    int sum = addNumbers(n);
    printf("The sum from 1 to %i = %i", n, sum);

    int number1 = 10;
    int number2 = 50;
    int gcd = findGCD(number1, number2);
    printf("\nGCD of %i and %i = %i",number1, number2, gcd);

    return 0;
}

int addNumbers(int n){

    if (n == 1)
    {
        return n;
    }

    return n + addNumbers(n - 1);
    
}

int findGCD(int number1, int number2){

    while (number1 != number2)
    {
        if (number1 > number2)
        {
            return findGCD(number1 - number2, number2);
        }
        else
        {
            return findGCD(number1, number2 - number1);
        }
    
    }

    return number1;
    

}