#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool CheckPalindrome(int iNo)
{
    auto int iCopy = iNo;
    auto int iDigit = 0;
    auto int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;
        iRev = (iRev * 10) + iDigit;
    }

    if(iRev == iCopy)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    auto int iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == TRUE)
    {
        printf("Number is palindrome : %d\n",iValue);
    }
    else
    {
        printf("Number is not palindrome : %d\n",iValue);
    }

    return 0;
}