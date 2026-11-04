#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;

    if(iStart <=0 || iEnd <=0)
    {
        printf("Invalid");
        return 0;
    }

    for(; iStart <= iEnd; iStart++)
    {
       iSum = iSum + iStart;
        
    }
    return iSum;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iRet = 0;

    printf("Enter Starting Poin\n");
    scanf("%d",&ivalue1);

    printf("Enter Ending Point\n");
    scanf("%d",&ivalue2);

    iRet = RangeSum(ivalue1, ivalue2);

    printf("Addition is %d\n",iRet);

    return 0;
}