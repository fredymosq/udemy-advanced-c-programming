
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numberPosToShift = 1;
    int number = 8;
    int myNumber = 16;
    int numberShiftedLeft = number << numberPosToShift;
    int numberShiftedRight =  myNumber >> numberPosToShift;

    printf("numberShifted left %i bit: %i", numberPosToShift, numberShiftedLeft);
    printf("\nnumberShifted right %i bit: %i", numberPosToShift, numberShiftedRight);


    return 0;
}
