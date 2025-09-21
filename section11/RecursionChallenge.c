// Write a program which will calculate the sum of numbers from 1 to n
// using recursion

#include <stdio.h>

int addNumbers(int n);

int main(int argc, char const *argv[])
{
    int n = 5;
    int sum = addNumbers(n);
    printf("The sum from 1 to %i = %i", n, sum);

    return 0;
}

int addNumbers(int n){

    if (n == 1)
    {
        return n;
    }

    return n + addNumbers(n - 1);
    
}