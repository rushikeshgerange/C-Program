#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    auto int iCnt = 0;
    auto int iSum = 0;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

};

int main()
{
    auto int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("Number %d is a perfect number.\n",iValue);
    }
    else
    {
        printf("Number %d is not a perfect number.\n",iValue);

    }
    
    return 0;
}



// Time Complexity : O(N/2)