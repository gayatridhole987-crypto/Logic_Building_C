#include<stdio.h>

int CountRange(int iNo)
{
   int  iCount = 0;
   int iDigit = 0;
   while(iNo != 0)
   {

    iDigit = iNo % 10;

    if((iDigit >=3) && (iDigit <= 7))
    {
        iCount++;
    }

    iNo = iNo / 10;
   }
   return iCount;

}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet = CountRange(ivalue);

    printf("%d",iRet);

    return 0;
}