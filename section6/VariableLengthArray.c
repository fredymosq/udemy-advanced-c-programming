
#include <stdio.h>

int main(int argc, char const *argv[])
{
    size_t size = 0;
    printf("Enter the number of elementos to store: ");
    scanf("%zd", &size);

    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        array[i] = i;
        printf("array[%zd] = %i\n", i, array[i]);
    }
    
    return 0;
}
