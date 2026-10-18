#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 11)
    {
        printf("Hello");
    }
    else 
    {
        printf("Demo");
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