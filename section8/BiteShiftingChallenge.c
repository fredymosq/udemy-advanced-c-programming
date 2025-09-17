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
    long long number1;
    long long number2;
    long long  binaryNumber1;
    long long  binaryNumber2;

    printf("Enter number 1: ");
    scanf("%lli", &number1);
    
    printf("\nEnter number 2: ");
    scanf("%lli", &number2);

    binaryNumber1 = decimalToBinary(number1);
    binaryNumber2 = decimalToBinary(number2);

    printf("Number 1: %lli -> in binary is:%lli", number1, binaryNumber1);
    printf("\nNumber 2: %lli -> in binary is:%lli", number2, binaryNumber2);

    long long complementNumber1 = ~number1;
    long long complementNumber2 = ~number2;

    long long orNumber = (number1 | number2);
    long long andNumber = (number1 & number2);
    long long xorNumber = (number1 ^ number2);

    printf("\n%lli | %lli = %lli -> binary = %i", number1, number2, orNumber, decimalToBinary(orNumber));
    printf("\n%lli & %lli = %lli -> binary = %i", number1, number2, andNumber, decimalToBinary(andNumber));
    printf("\n%lli ^ %lli = %lli -> binary = %i", number1, number2, xorNumber,decimalToBinary(xorNumber));

    printf("\nComplement number1 using (~) is:%lli", complementNumber1);
    printf("\nComplement number1 using (~) is:%lli", complementNumber2);


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
