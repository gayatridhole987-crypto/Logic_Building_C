#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet = SumNonFact(ivalue);

    printf("%d\n",iRet);


    return 0;
}