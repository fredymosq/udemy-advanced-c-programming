
#include <stdio.h>

union student
{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};


int main(int argc, char const *argv[])
{
    union student jhonDoe;

    jhonDoe.letterGrade = 'B';
    jhonDoe.roundedGrade = 87;
    jhonDoe.exactGrade = 8.5;
 

    printf("Union student example\n");
    printf("Letter grade %c\n", jhonDoe.letterGrade);
    printf("Rounded grade: %i\n", jhonDoe.roundedGrade);
    printf("Exact grade: %f\n", jhonDoe.exactGrade);


    return 0;
}
