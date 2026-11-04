#include<stdio.h>

int MultDigits(int iNo)
{
   int  iMult = 1;
   int iDigit = 0;

   while(iNo != 0)
   {

       iDigit = iNo % 10;

       iMult = iMult * iDigit;
   
       iNo = iNo / 10;
   }

   return iMult;

}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    iRet = MultDigits(ivalue);

    printf("%d",iRet);

    return 0;
}