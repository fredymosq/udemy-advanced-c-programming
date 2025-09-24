// Write a program that print the values of the following predefined 
// symbolic macros
// __LINE__
// __FILE__
// __DATE__
// __TIME__
// __STDC__
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Value of __LINE__ = %d", __LINE__);
    printf("\nValue of __FILE__ = %s", __FILE__);
    printf("\nValue of __DATE__ = %s", __DATE__);
    printf("\nValue of __TIME__ = %s", __TIME__);
     printf("\nValue of __STDC__ = %d", __STDC__);

    return 0;
}
