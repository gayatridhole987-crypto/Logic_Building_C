#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int ivalue)
{
        if(ivalue > 0)
        {
            printf("Positive number");
        }
        else if(ivalue < 0)
        {
            printf("Negative Number");
        }
        else 
        {
            printf("zero");
        }
}

int main()
{
    int ivalue = 0;

    printf("Enter a number :\n");
    scanf("%d",&ivalue);

    CheckNumber(ivalue);

    return EXIT_SUCCESS;

}