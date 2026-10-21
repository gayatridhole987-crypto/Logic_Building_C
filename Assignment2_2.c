#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    //write updator
    while(iNo > icnt)
    {
        printf("*");
        iNo--;

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