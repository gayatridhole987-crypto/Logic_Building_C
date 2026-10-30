
////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Number
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display Number As Small, medium and Large
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if((iNo > 50)&&(iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo >= 100)
    {
        printf("Large");
    }

}
int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Number(ivalue);

    return 0;
}