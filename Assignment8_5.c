////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Table
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display Table in Reverse
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void TableRev(int iNo)
{
   if(iNo < 0)
   {
      iNo = -iNo;
   }
   int  icnt = 0; 

   for(icnt = 10; icnt >= 1; icnt--)
   {
        printf("%d ",icnt * iNo);
   }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    TableRev(ivalue);

    return 0;
}

