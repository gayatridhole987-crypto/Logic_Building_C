#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    
    if(fMarks > 100)
    {
        printf("Invalid",fMarks);
    }
    else if(fMarks > 75)
    {
        printf("Gread B",fMarks);
    }
    else if(fMarks > 60)
    {
        printf("Gread C",fMarks);
    }
    else if(fMarks > 40)
    {
        printf("Gread D",fMarks);
    }
    else if(fMarks > 100)
    {
        printf("Gread A",fMarks);
    }

}

int main()
{
    float fMarks = 0.0f;

    printf("Enter number:");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}