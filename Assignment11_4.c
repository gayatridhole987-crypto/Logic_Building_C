#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    if(iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        return -1;
    }

    for(; iStart <= iEnd; iStart++)
    {
        if(iStart % 2 == 0)
        {
            iSum = iSum + iStart;
        }
    }

    return iSum;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iRet = 0;

    printf("Enter Starting Point\n");
    scanf("%d",&ivalue1);

    printf("Enter Ending Point\n");
    scanf("%d",&ivalue2);

    iRet = RangeSumEven(ivalue1, ivalue2);

    if(iRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Addition of Even Numbers is : %d\n",iRet);
    }

    return 0;
}