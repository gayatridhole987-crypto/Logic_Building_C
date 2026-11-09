#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",j);

        }
        printf("\n\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows :");
    scanf("%d",&ivalue1);

    printf("Enter number of rows :");
    scanf("%d",&ivalue2);

    Pattern(ivalue1, ivalue2);

    return 0;
}