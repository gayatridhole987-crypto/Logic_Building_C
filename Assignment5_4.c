#include<stdio.h>
#include<stdlib.h>

void MultipleDivisibility(int ivalue)
{
    int iNo = 0;

    if(((ivalue % 3)==0) && ((ivalue % 5)==0))
    {
        printf("Divisible by both");
    }
    else if((ivalue % 3)==0)
    {
        printf("Divisible by 3");
    }
    else if((ivalue % 5)==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible");
    }

}

int main()
{
    int ivalue = 0;

    printf("Enter Number :");
    scanf("%d",&ivalue);

    MultipleDivisibility(ivalue);

    return EXIT_SUCCESS;
}