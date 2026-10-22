#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d is Greater\n",iFirst);
    }
    else if(iSecond > iFirst && iSecond > iThird)
    {
        printf("%d is Greater\n",iSecond);
    }
    else if(iThird > iFirst && iThird > iSecond)
    {
        printf("%d is Greater\n",iThird);
    }
    else
    {
        printf(" Numbers Are equal");
    }
}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int ivalue3 = 0;


    printf("Enter first numbers :");
    scanf("%d",&ivalue1);

    printf("Enter second numbers :");
    scanf("%d",&ivalue2);

    printf("Enter Third numbers :");
    scanf("%d",&ivalue3);

    FindGreatest(ivalue1, ivalue2, ivalue3);

    return EXIT_SUCCESS;
}