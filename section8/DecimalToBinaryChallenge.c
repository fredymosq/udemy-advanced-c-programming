// Write a program that converts decimal to binary

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int decimalNumber = 73;
    printf("Decimal number: %i\n", decimalNumber);
    int binaryNumber[32];
    
    int counter = 0;
    while (decimalNumber > 0)
    {
        int digit = decimalNumber % 2;
        binaryNumber[counter] = digit;
        decimalNumber = decimalNumber / 2;
        counter++;

    }

    
    printf("Binary number: ");
    for (int i = counter - 1; i >= 0; i--)
    {
        printf("%i", binaryNumber[i]);
    }

    
    
    return 0;
}
