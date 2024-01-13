#include<stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("* \t");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
