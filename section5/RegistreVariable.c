
#include <stdio.h>

int main(int argc, char const *argv[])
{
    register int myVariable = 900;
    printf("value of myVariable is: %i\n", myVariable);
    //printf("address of myVariable is: %i\n", &myVariable); // compile error,  error: address of register variable requested
    return 0;
}
