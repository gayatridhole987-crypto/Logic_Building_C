#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || j == 1 || i == iRow || j == iCol || i + j == iRow + 1)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
           
        }
        printf("\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows :");
    scanf("%d",&ivalue1);

    printf("Enter number of columns :");
    scanf("%d",&ivalue2);

    Pattern(ivalue1, ivalue2);

    return 0;
}