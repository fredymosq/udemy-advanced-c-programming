
#include <stdio.h>


int myExternVariable = 5;


void changeExternVariable();

int main(int argc, char const *argv[])
{
    printf("myExternVariable = %i\n", myExternVariable);
    changeExternVariable();
    printf("myExternVariable = %i\n", myExternVariable);

    return 0;
}
