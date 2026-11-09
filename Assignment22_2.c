#include<stdio.h>

void Pattern(int iRow)
{
    int i = 0;

    for(i = 1; i <= iRow; i++)
    {
        printf("%d\t#\t",i);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number of rows :");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}
