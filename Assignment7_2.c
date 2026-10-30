
////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Display
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Performs Displays Output
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void Display(int iNo)
{
   int  icnt = 0;

   if(iNo < 0)
   {
       iNo = - iNo;  
   }

   for(icnt = 1; icnt <= iNo; icnt++)
   {
       printf("%d",icnt);
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