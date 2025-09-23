
#include <stdio.h>

union car
{
    int myIntValue;
    float myFloatValue;
    char name[40];
};

int main(int argc, char const *argv[])
{
    union car mazda;
    union car volvo;
    union car *mercedez;

    printf("Memory occupied by data: %zu\n", sizeof(mazda));
    
    return 0;
}
