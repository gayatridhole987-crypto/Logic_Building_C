#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t*\t%d\t",i);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : ");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}