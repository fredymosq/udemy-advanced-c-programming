

#include <stdio.h>

void myFunction(int **dptr)
{
    // Incrementing the value of var using double pointer
    **dptr += 1000;
}

int main(int argc, char const *argv[])
{
    int var = 3000;
    int *ptr = NULL;
    int **dptr = NULL;

    ptr = &var;
    dptr = &ptr;

    printf("Value of var = %d\n", var);
    printf("Value of var using ptr = %d\n", *ptr);
    printf("Value of var using dptr = %d\n", **dptr);

    printf("Address of var = %p\n", &var);
    printf("Address of var using ptr = %p\n", ptr);
    printf("Address of var using dptr = %p\n", *dptr);

    myFunction(dptr);

    printf("Value of var after myFunction = %d\n", var);

    

    return 0;
}
