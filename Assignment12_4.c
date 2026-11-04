#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

   while(iNo != 0)
   {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
   }
   return iCount;
}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    iRet = CountFour(ivalue);

    printf("%d",iRet);

    return 0;

}