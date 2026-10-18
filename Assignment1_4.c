#include<stdio.h>

typedef int BOOL;
#define True 1
#define False 0

int Check(int iNo)
{
if((iNo % 5)==0)
{
    return True;
}
else 
{
    return False;
}
}

int main()
{
    int ivalue = 0;
    BOOL bret = False;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    bret = Check(ivalue);

    if(bret == True)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("It is not Divisible by 5");
    }

    return 0;

}