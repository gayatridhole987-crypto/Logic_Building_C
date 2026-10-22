#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond)
{
    
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n",iSecond);
    }
    else
    {
        printf("Both are equal\n");
    }


}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("Enter first numbers :");
    scanf("%d",&ivalue1);

    printf("Enter second numbers :");
    scanf("%d",&ivalue2);

    FindGreatest(ivalue1, ivalue2);

    return 0;
}