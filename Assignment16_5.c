#include<stdio.h>
#include<stdlib.h>


void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 1;

    for(i =1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           printf("%d\t",iNum);
           iNum++;
        }
           printf("\n\n");
    }  
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter Number of rows and columns :");
    scanf("%d %d",&ivalue1, &ivalue2);

    Pattern(ivalue1, ivalue2);

    return 0;
}