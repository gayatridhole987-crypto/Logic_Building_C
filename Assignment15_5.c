
#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    if(iNo1 / iNo2)
    {
        
    }
   
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks\n");
    scanf("%d", &ivalue1);

    printf("Please enter Obtain marks\n");
    scanf("%d", &ivalue2);

    fRet = Percentage(ivalue1, ivalue2);

    printf("Multiplication is %d\n", fRet);

    return 0;
}
