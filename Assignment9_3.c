////////////////////////////////////////////////////////////////////////       
//
//  Function name :  EvenFactorial
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display Even Factors
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void EvenFactorial(int iNo)
{
   int  icnt = 0; 
   int ifact = 1;

   if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   for(icnt = 1; icnt <= iNo; icnt++)
   {
       if(icnt % 2 == 0)
       {
          ifact = ifact * icnt;
       }
   }
   printf("%d",ifact);
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    EvenFactorial(ivalue);

    return 0;
}

