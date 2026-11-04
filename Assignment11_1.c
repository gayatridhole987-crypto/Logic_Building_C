#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    for(; iStart <= iEnd; iStart++)
    {
        printf("%d\t",iStart);
    }

}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter Starting Poin\n");
    scanf("%d",&ivalue1);

    printf("Enter Ending Point\n");
    scanf("%d",&ivalue2);

    RangeDisplay(ivalue1, ivalue2);

    return 0;
}

