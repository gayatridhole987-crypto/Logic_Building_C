////////////////////////////////////////////////////////////////////////       
//
//  Function name :  FactorialDiffrence
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display Diffrence between even and odd factorial
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

int FactorialDiff(int iNo)
{
  int icnt = 0;
  int iEvenfact = 1, iOddfact = 1;

  for(icnt = 1; icnt <= iNo; icnt++)
  {
    if(icnt % 2 == 0)
    {
        iEvenfact = iEvenfact * icnt;
    }
    else
    {
        iOddfact = iOddfact * icnt;
    }
  }
  return(iEvenfact - iOddfact);

}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    iRet = FactorialDiff(ivalue);

    printf("Factorial Diffrence is %d",iRet);

    return 0;
}