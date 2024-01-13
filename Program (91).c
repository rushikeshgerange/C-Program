#include<stdio.h>

void DisplayClass(float fMarks)
// Logical ||  : If any of the condition is true then it enter inside the if
// Logical &&  : If all the condition are true then it enters inside if

{
    if((fMarks < 0.00) || (fMarks > 100))
    {
        printf("Invalid Marks \n");
    }

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