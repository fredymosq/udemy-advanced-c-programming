
#include <stdio.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    int number = 5;
    for (int i = 0; i < 10; i++)
    {
        printf("i = %i, number = %i\n", i, number);
        assert(i < number);
    }
    
    return 0;
}
