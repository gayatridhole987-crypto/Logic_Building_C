////////////////////////////////////////////////////////////////////////       
//
//  Function name :  KmtoMeter
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display KM to meter Conversion
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

int KMtoMeter(int iNo)
{
    iNo = iNo * 1000;

}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&ivalue);

    iRet = KMtoMeter(ivalue);

    printf("%d",iRet);

    return 0;
}