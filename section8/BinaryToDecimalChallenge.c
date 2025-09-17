// Write a program that converts binary numbers to decimal

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char binaryNumber[] = "01001001";
    int length = strlen(binaryNumber);
    long int decimalNumber = 0;
    int counter = 1;
    
    
    for (int i = length - 1; i >=0; i--)
    {
        int digit = binaryNumber[i] - '0';
        decimalNumber += (digit * counter);
        counter *= 2;
        
    }
    

    printf("Binary number: %s\n", binaryNumber);
    printf("Decimal number is:%li ", decimalNumber);
    

    return 0;
}
