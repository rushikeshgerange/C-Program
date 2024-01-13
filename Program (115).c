#include<stdio.h>

int SumFactor(int iNo)
{
    auto int iCnt = 0;
    auto int iSum = 0;
//         1         2            4
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)    //  3
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

};

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumFactor(iValue);

    printf("Sum of factor are : %d\n",iRet);

    
    return 0;
}



// Time Complexity : O(N/2)