#include<stdio.h>

void Pattern(int iRow)
{
    int i = 0;
    char ch = 'A';
    

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        printf("%c\t",ch);
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
