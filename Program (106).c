#include<stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0; 

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter many times you want to display 'Jay Ganesh' on screen : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}