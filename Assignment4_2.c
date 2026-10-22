#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int ivalue)
{
    int iNo = 0;

        if((iNo = ivalue%2)==0)
        {
            printf("Even Numberr");
        }
        else
        {
            printf("Odd Number");
        }
       
}

int main()
{
    int ivalue = 0;

    printf("Enter a number :\n");
    scanf("%d",&ivalue);

    CheckEvenOdd(ivalue);

    return EXIT_SUCCESS;

}