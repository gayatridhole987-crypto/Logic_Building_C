#include<stdio.h>

int PrintEven(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt < iNo; icnt++)
    {
        printf("%d\n", icnt*2);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    PrintEven(ivalue);

    return 0;
}