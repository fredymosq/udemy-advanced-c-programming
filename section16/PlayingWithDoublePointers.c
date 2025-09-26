
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;

    int *p1 = NULL;
    int **p2 = NULL;

    p1 = &a;
    p2 = &p1;

    printf("Address of a = %p\n", &a);
    printf("Address of p1 = %p\n", &p1);
    printf("Address of p2 = %p\n", &p2);

    printf("Value at address of p1 = %p\n", *p1);
    printf("Value at address of p2 = %p\n", *p2);
    printf("Value at address of address of **p2 = %d\n", **p2);


    printf("Value of a = %d\n", a);
    printf("Value of a using p1 = %d\n", *p1);
    printf("Value of a using p2 = %d\n", **p2);

    return 0;
}
