#include<stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;
    int iCount = 0;

    for(iCount = 1; iCount < iNo; iCount++)
    {
        if((iNo % iCount == 0) && (iCount != 1))
        {
            iMult = iMult * iCount;
        }
    }

    return iMult;
}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    iRet = MultFact(ivalue);

    printf("%d",iRet);

    return 0;

}