#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    for(; iStart <= iEnd; iStart++)
    {
        if(iStart % 2 == 0)
        {
        printf("%d\t",iStart);
        }
    }

}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter Starting Poin\n");
    scanf("%d",&ivalue1);

    printf("Enter Ending Point\n");
    scanf("%d",&ivalue2);

    RangeDisplayEven(ivalue1, ivalue2);

    return 0;
}
