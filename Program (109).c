#include<stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;

//         1        2         3
    for(iCnt=1; iCnt<=iNo; iCnt++)       //Increment
    {
        printf(" %d \n", iCnt);    // 4
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

// Output :
//          1
//          2   4   3
//          2   4   3
//          2   4   3
//          2   4   3
//          2   4   3
//          2   4   3
//          .
//          .
//          .
//          .
//          2