#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is Even");
    }

}

int main()
{
    int ivalue = 0;
    BOOL bret = False;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    bret = CheckEven(ivalue);

    //Display result

    return 0;
}
