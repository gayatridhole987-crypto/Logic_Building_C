#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo == 0)
    {
        printf("0");
        return TRUE;
    }

   while(iNo != 0)
   {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
   }
   return FALSE;
}

int main()
{
    int ivalue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    bRet = ChkZero(ivalue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;

}