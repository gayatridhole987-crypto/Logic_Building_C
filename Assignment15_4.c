#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iSum = 1;

    if(iNo1 != 0)
    {
        iSum = iSum * iNo1;
    }

    if(iNo2 != 0)
    {
        iSum = iSum * iNo2;
    }

    if(iNo3 != 0)
    {
        iSum = iSum * iNo3;
    }

    return iSum;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0, iRet = 0;

    printf("Please enter three numbers\n");
    scanf("%d %d %d", &ivalue1, &ivalue2, &ivalue3);

    iRet = Multiply(ivalue1, ivalue2, ivalue3);

    printf("Multiplication is %d\n", iRet);

    return 0;
}

