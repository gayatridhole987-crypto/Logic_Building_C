#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks < 60) && (iAge < 17))
    {
        printf("Not Eligible");
    }
    else if((fMarks > 75) && (iAge < 17))
    {
        printf("Not Eligible");
    }
    else if((fMarks >= 60) && (iAge >=17))
    {
        printf("Eligible for Admission");
    }

}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    printf("Enter Age : ");
    scanf("%f",&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}