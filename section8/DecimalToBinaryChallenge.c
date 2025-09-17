// Write a program that converts decimal to binary

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int decimalNumber = 73;
    printf("Decimal number: %i\n", decimalNumber);
    int binaryNumber = 0;
    
    int counter = 1;
    while (decimalNumber > 0)
    {
        int digit = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        binaryNumber += (digit * counter);
        counter = counter * 10;

    }

    
    printf("Binary number: %i", binaryNumber);

    
    
    return 0;
}
