////////////////////////////////////////////////////////////////////////       
//
//  Function name :  CircleArea
//  Input         :  float
//  Output        :  float
//  Description   :  Display Area of circle
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

double CircleArea(float fRadius)
{
    double fArea = 0;
    
    fArea = 3.14 * fRadius * fRadius;

    return fArea;
    
}
int main()
{
    float fvalue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f",&fvalue);

    dRet = CircleArea(fvalue);

    printf("%f",dRet);

    return 0;
}
