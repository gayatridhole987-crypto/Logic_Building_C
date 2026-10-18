#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int icnt = 0;

    for(icnt=1; icnt <= iNo; icnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int ivalue = 0;


    printf("Enter the Frequancy\n");
    scanf("%d",&ivalue);

    Accept(ivalue);

    return 0;
}