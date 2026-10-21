#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    //write updator
    while(icnt < iNo)
    {
        printf("*");
        icnt++;

    }
}

int main()
{
    int ivalue = 0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}