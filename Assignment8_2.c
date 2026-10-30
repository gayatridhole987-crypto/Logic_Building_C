////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Display
//  Input         :  Integer
//  Output        :  Integer
//  Description   :  Display Number from One to Nine 
//  Date          :  30/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////   
#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    char *arr[] = {"Zero", "One", "Two", "Three", "Four",
                   "Five", "Six", "Seven", "Eight", "Nine"};

    for(icnt = 0; icnt <= 9; icnt++)
    {
        if(iNo == icnt)
        {
            printf("%s", arr[icnt]);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter digit\n");
    scanf("%d", &ivalue);

    Display(ivalue);

    return 0;
}