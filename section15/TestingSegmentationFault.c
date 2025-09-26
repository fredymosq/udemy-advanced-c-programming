
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;
    // Attempting to dereference a NULL pointer will cause a segmentation fault
    printf("Value at ptr: %d\n", *ptr);
    return 0;
}