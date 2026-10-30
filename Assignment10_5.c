////////////////////////////////////////////////////////////////////////       
//
//  Function name :  SquareMetre
//  Input         :  float
//  Output        :  double
//  Description   :  Display Conversion of number to square meter
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

double SquareMeter(float fSquareFeet)
{
    double dSquareMater = 0.0;

    dSquareMater = fSquareFeet * 0.092903;

    return dSquareMater;

}

int main()
{
    float fvalue = 0;
    double dRet = 0.0;

    printf("Enter in square feet\n");
    scanf("%f",&fvalue);

    dRet = SquareMeter(fvalue);

    printf("Area in square meter is %lf\n",dRet);

    return 0;
}