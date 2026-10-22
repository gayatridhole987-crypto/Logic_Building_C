#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(float iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100) 
    {
       fBill = iUnits * 5;
       printf("Electricity Bill is :%2.f\n",fBill);
    }
    else if(iUnits <= 200) 
    {
       fBill = (100 * 5) + ((iUnits - 100)*7);
       printf("Electricity Bill is :%2.f\n",fBill);
    }
    else if(iUnits >= 200) 
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200)*10);
       printf("Electricity Bill is :%2.f\n",fBill);
    }
}

int main()
{
    float iUnits = 0.0f;

    printf("Enter Consumed Units : ");
    scanf("%f",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}