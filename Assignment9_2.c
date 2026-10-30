////////////////////////////////////////////////////////////////////////       
//
//  Function name :  DollerToINR
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Convert Doller to INR
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void DollerToINR(int iNo)
{
   int iResult = 0; 

   iResult = iNo * 70;

   printf("%d",iResult);

}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    DollerToINR(ivalue);

    return 0;
}


