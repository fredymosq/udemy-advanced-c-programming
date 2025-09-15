// Write a program to read elements in an array and fid the sum
// of the array elements
//Example:
//  input: elements: 10, 20, 30, 40
//  output: sum of all elements is 100

#include <stdio.h>

int main(int argc, char const *argv[])
{
    size_t sizeArray;

    printf("Enter the amount of numbers you want to sum: ");
    scanf("%zd", &sizeArray);

    int arrayNumbers[sizeArray];
    int totalSum = 0;

    for (size_t i = 0; i < sizeArray; i++)
    {
        printf("\nEnter number: ");
        scanf("%i", &arrayNumbers[i]);
    }

    
    for (size_t i = 0; i < sizeArray; i++)
    {
        totalSum += arrayNumbers[i];
    }

    printf("Sum of all elements = %i", totalSum);
    
    

    return 0;
}
