#include<stdio.h>

float CalculatePercentage(int iMarks , int iTotal)
{
    auto float fAns = 0.0f;

    if((iMarks < 0 )   || (iTotal < 0))
    {
         printf("Invalid Input \n");
        return fAns;
    }

    if(iMarks > iTotal)
    {
        printf("Invalid Input \n");
        return fAns;
    }

    fAns = (((float)iMarks / (float)iTotal)*100);
    return fAns;
};

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the marks : ");
    scanf("%d", &iValue1);

    printf("Enter the total marks : ");
    scanf("%d", &iValue2);

    fRet = CalculatePercentage(iValue1, iValue2);

    printf("Your percentage is : %f\n",fRet);

    return 0;
}