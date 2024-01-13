/*
    START
        Accept number from user
        Divide that number by 2
        If remainder is 0 then display even
        otherwise display odd
    STOP
*/



#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo %2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    auto int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", & iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Number %d is even. \n",iValue);
    }
    else
    {
        printf("Number %d is odd. \n",iValue);
    }


    return 0;
}