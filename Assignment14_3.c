#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(iNo % i != 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    NonFact(ivalue);

    return 0;
}