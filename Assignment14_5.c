#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i<= iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact = iSumNonFact + i;
        }
    }
    printf("Sum of Factors : %d\n",iSumFact);
    printf("Sum of non Factors : %d\n",iSumNonFact);
    printf("Difference : %d\n",iSumNonFact - iSumFact);
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet = SumNonFact(ivalue);

    return 0;
}