
#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int length;
    int array[];
};

int main(int argc, char const *argv[])
{
    struct myArray *m = NULL;
    int arraySize = 0;

    printf("Enter the size of the flexible array\n");
    scanf("%d", &arraySize);

    size_t size = sizeof(struct myArray);
    m = malloc(size + (sizeof(int) * arraySize));

    m->length = arraySize;
    m->array[0] = 77;
    m->array[1] = 99;

    printf("\nArray is: %d, %d\n", m->array[0], m->array[1]);

    return 0;
}
