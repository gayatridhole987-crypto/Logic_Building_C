
////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Odd Display
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display Odd Number
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void OddDisplay(int iNo)
{
   int  icnt = 0; 

   for(icnt = 1; icnt <= iNo; icnt++)
   {
       if(icnt % 2 != 0)
       {
            printf("%d ",icnt);
       }
   }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    OddDisplay(ivalue);

    return 0;
}
