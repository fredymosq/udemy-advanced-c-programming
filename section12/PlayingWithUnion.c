
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

    //Accessing union members

    mazda.myFloatValue = 2.0;
   // mazda.myIntValue = 5000;

    printf("car %s\n", mazda.name);
    printf("car %f\n", mazda.myFloatValue);
    printf("car %i\n", mazda.myIntValue);
    
    return 0;
}
