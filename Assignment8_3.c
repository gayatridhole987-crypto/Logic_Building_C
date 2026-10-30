////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Factorial
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display Factorial
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void Factorial(int iNo)
{
   int  icnt = 0; 
   int ifact = 1;

   for(icnt = 1; icnt <= iNo; icnt++)
   {
        ifact = ifact * icnt;
   }
   printf("%d",ifact);
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Factorial(ivalue);

    return 0;
}

