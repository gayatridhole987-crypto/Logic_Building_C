
////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Pattern
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Performs Pattern Printing
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   


#include<stdio.h>

void Pattern(int iNo)
{
   int  icnt = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("* $ ");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}