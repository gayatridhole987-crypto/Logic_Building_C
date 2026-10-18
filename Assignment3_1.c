#include<stdio.h>

int PrintEven(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt < iNo%2; icnt++)
    {
    if(iNo <= 0)
    {
        return iNo;
    }

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