#include<stdio.h>

void Display(char ch)
{
    printf("Decimal value : %d\n",ch);
    printf("Octal value : %o\n",ch);
    printf("Hexadecimal value : %X\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
