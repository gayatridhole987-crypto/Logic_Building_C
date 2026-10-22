#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cvalue)
{
    if((cvalue >= 'A') && (cvalue <= 'Z'))
    {
        printf("Uppercase Alphabest",cvalue);
    }
    else if((cvalue >= 'a') && (cvalue <= 'z'))
    {
        printf("Lowercase Alphabet",cvalue);
    }
    else if((cvalue >= 0) && (cvalue <= 9))
    {
        printf("Digit",cvalue);
    }
    else
    {
        printf("Symbol",cvalue);
    }
}

int main()
{
    char cvalue = '\0';

    printf("Enter a character :");
    scanf("%c",&cvalue);

   CheckCharacterType(cvalue);

   return EXIT_SUCCESS;
}