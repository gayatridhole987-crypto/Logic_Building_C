#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define True 1
#define False 0

bool CheckVowel(char cvalue)
{
    if((cvalue =='a') ||(cvalue =='e')||(cvalue =='i') ||(cvalue =='o')||(cvalue =='u'))
    {
        return True;
    }
    else 
    {
        return False;
    }
}

int main()
{
    char cvalue = '\0';
    bool bret = False;

    printf("Enter Character\n");
    scanf("%c",&cvalue);

    bret = CheckVowel(cvalue);

    if(bret == True)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }

    return 0;
}