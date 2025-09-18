// Write a program that read two integer from users
// your program has to print the results of applying:
//  the ~ operator on both numbers
//  the | operator on both numbers
//  the & operator on both numbers
//  the ^ operator on both numbers
//  print the numbers in binary format

#include <stdio.h>

int decimalToBinary(int decimalNumber);

int main(int argc, char const *argv[])
{
    int number1;
    int number2;
    long binaryNumber1;
    long binaryNumber2;

    printf("Enter number 1: ");
    scanf("%i", &number1);
    
    printf("\nEnter number 2: ");
    scanf("%i", &number2);

    binaryNumber1 = decimalToBinary(number1);
    binaryNumber2 = decimalToBinary(number2);

    printf("Number 1: %i -> in binary is:%li", number1, binaryNumber1);
    printf("\nNumber 2: %i -> in binary is:%li", number2, binaryNumber2);

    long complementNumber1 = ~number1;
    long complementNumber2 = ~number2;

    long orNumber = (number1 | number2);
    long andNumber = (number1 & number2);
    long xorNumber = (number1 ^ number2);

    printf("\n%i | %i = %li -> binary = %i", number1, number2, orNumber, decimalToBinary(orNumber));
    printf("\n%i & %i = %li -> binary = %i", number1, number2, andNumber, decimalToBinary(andNumber));
    printf("\n%i ^ %i = %li -> binary = %i", number1, number2, xorNumber,decimalToBinary(xorNumber));

    printf("\nComplement number1 using (~) is:%li", complementNumber1);
    printf("\nComplement number1 using (~) is:%li", complementNumber2);


    return 0;
}

int decimalToBinary(int decimalNumber){

    int binaryNumber = 0;
    int counter = 1;

    while (decimalNumber > 0)
    {
        int digit = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;

        binaryNumber += (digit * counter);

        counter *= 10;

    }

    return binaryNumber;
    
}
