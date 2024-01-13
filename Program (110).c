#include<stdio.h>

void Display(int iNo)
{
    auto int iCnt = 1;

    for(iCnt=iNo; iCnt>=1; iCnt--)       //Decrement
    {
        printf(" %d \n", iCnt);
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