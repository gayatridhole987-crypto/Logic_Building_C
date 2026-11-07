#include<stdio.h>
#include<stdlib.h>


void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch ='\0';

    for(i =1; i <= iRow; i++)
    {
        for(j =1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",'a'+ j-1);
            }
            else
            {
                printf("%c\t",'A'+ j-1);
            
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&ivalue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&ivalue2);

    Pattern(ivalue1, ivalue2);

    return 0;
}