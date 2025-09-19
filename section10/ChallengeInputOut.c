// Write a program in C to count the number of words
// and characters in a file OR from standard unput
// if there is one argument, it is interpreted as the name of a file
// if there is no argument, the standard input (stdin) is to be used for input

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CHARACTERS_FILE_NAME 255

int main(int argc, char const *argv[])
{
   char *pFileName = malloc(MAX_CHARACTERS_FILE_NAME);
   FILE *pFile = NULL;
   int numberWords = 0;
   int numberCharacters = 0;
   int character = '\0';
   int inWord = 0;

   if (argc < 2)
   {
    printf("Enter File name (MAX %i characters): ",MAX_CHARACTERS_FILE_NAME);
    scanf("%255s", pFileName);
   }
   else{
    pFileName = argv[1];
   }
   
   pFile = fopen(pFileName, "r");
   
   if (pFile == NULL)
   {
    printf("\nError opening file\n");

    return 1;
   }
   


   while ((character = fgetc(pFile)) != EOF)
   {

    numberCharacters++;

    if (isspace(character))
    {
        inWord = 0;
    }
    else if(!inWord){
        inWord++;
        numberWords++;
    }
    
   }

   printf("\nNumbers of words in file is: %i", numberWords);
   printf("\nNumbers of characters in file is: %i", numberCharacters);
   



   

    return 0;
}

