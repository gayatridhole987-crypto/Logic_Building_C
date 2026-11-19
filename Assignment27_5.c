#include<stdio.h>

void DisplayReverse(char *str)
{
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >= str)
    {
        printf("%c",*end);
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Reverse string is : ");

    DisplayReverse(arr);

    return 0;
}
