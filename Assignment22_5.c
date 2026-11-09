#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",i * 2);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}