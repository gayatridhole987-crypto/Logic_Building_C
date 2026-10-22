#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int ivalue)
{
    if(ivalue % 5 == 0)
    {
        printf("Divisible by 5",ivalue);
    }
    else
    {
        printf("Not Divisible by 5",ivalue);
    }

}

int main()
{
    int ivalue = 0;

    printf("Enter a number\n");
    scanf("%d",&ivalue);

    CheckDivisibility(ivalue);

    return EXIT_SUCCESS;
}