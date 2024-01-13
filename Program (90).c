#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >= 0.0) && (fMarks < 35.0))
    {
        printf("You are fail...\n");
    }
    else if((fMarks >= 35.0) && (fMarks < 50.0))
    {
        printf("You class is pass class\n");

    }
    else if((fMarks >= 50.0) && (fMarks < 60.0))
    {
        printf("You class is second class\n");

    }
    else if((fMarks >= 60.0) && (fMarks < 75.0))
    {
        printf("You class is first class\n");

    }
    else if((fMarks >= 75.0) && (fMarks <= 100.0))
    {
        printf("You class is first class with distinction\n");

    }
}

int main()
{
    auto float fValue = 0.0f;

    printf("Enter Your Percentage : ");
    scanf("%f" ,&fValue);

    DisplayClass(fValue);

    return 0;
}