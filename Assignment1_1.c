#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 > iNo1)
    {
        return -1;
    }  

      iAns = iNo1 / iNo2;

        return iAns;
}

int main()
{
    int ivalue1 = 15, ivalue2 = 5;

    int iret = 0;

    iret = Divide(ivalue1, ivalue2);

    printf("Division is %d\n",iret);

    return 0;
}