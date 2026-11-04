#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

   while(iNo != 0)
   {
        iDigit = iNo % 10;

        if(iDigit == 2)
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

    iRet = CountTwo(ivalue);

    printf("%d",iRet);

    return 0;

}