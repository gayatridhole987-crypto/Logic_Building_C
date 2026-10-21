#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cvalue)
{
    if((cvalue >= 'a') && (cvalue <= 'z'))
    {
        printf("%c\n",cvalue-32);

    }
    else if((cvalue >= 'A') && (cvalue <= 'Z'))
    {
        printf("%c\n",cvalue+32);

    }
}

int main()
{
    char cvalue = '\0';

    printf("Enter Character\n");
    scanf("%c",&cvalue);

    DisplayConvert(cvalue);

    return 0;
}