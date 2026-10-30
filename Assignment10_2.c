////////////////////////////////////////////////////////////////////////       
//
//  Function name :  RectArea
//  Input         :  float, float
//  Output        :  float
//  Description   :  Display Area of Rectangle
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

double RectArea(float fWidth, float fHight)
{
    double fArea = 0;
    
    fArea = fWidth * fHight;

    return fArea;
    
}
int main()
{
    float fvalue1 = 0.0, fvalue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width\n");
    scanf("%f",&fvalue1);

    
    printf("Enter Hight\n");
    scanf("%f",&fvalue2);

    dRet = RectArea(fvalue1, fvalue2);

    printf("%f",dRet);

    return 0;
}
