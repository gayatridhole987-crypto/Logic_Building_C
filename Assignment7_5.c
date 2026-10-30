
////////////////////////////////////////////////////////////////////////       
//
//  Function name :  MultipleDisplay
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Displays Multiple Number
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   
#include<stdio.h>

void MultipleDisplay(int iNo)
{
   int  icnt = 0; 

   for(icnt = 1; icnt <= iNo; icnt++)
   {
        printf("%d ",icnt * iNo);
   }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);

    return 0;
}

