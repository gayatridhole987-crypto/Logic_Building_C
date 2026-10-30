
////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Display
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Performs Display
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void Display(int iNo)
{
   int  icnt = 0; 

   for(icnt = -iNo; icnt <= iNo; icnt++)
   {
       printf("%d ",icnt);
   }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
