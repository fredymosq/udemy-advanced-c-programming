
#include <stdio.h>

static int callStaticVariable();

int main(int argc, char const *argv[])
{
    callStaticVariable();
    callStaticVariable();
    callStaticVariable();

    return 0;
}

int callStaticVariable(){

    static int count = 0;
    int myVariable = 0;

    count++;
    myVariable++;

    printf("\nthe function callStaticVariable has been executed: %i times, \nand the value of myVariable is: %i", count, myVariable);


    return count;
}
