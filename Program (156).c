// Pattern Printing
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=(-iNo); iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{          
    int iValue = 0;

    printf("Enter the count : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}