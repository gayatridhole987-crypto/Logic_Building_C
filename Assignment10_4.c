////////////////////////////////////////////////////////////////////////       
//
//  Function name :  FhtoCs
//  Input         :  float
//  Output        :  double
//  Description   :  Display conversion from Fh to Cs
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dcelsius = 0.0;

    dcelsius = ((fTemp - 32) * 5 / 9);

    return dcelsius;

}

int main()
{
    float fvalue = 0.0;
    double dRet = 0.0;

    printf("Enter Temprature in Farenheit\n");
    scanf("%f",&fvalue);

    dRet = FhtoCs(fvalue);

    printf("Temprature in Celcius is %lf\n",dRet);

    return 0;
}