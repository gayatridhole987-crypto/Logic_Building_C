#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEvenDigit = 0;
    int iSumOddDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEvenDigit = iSumEvenDigit + iDigit;
        }
        else
        {
            iSumOddDigit = iSumOddDigit + iDigit;
        }
        iNo = iNo / 10;
    }
    
    return iSumEvenDigit - iSumOddDigit;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet = CountDiff(ivalue);

    printf("%d",iRet);

    return 0;
}