// Problems on String

#include<stdio.h>

int CountDigit(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountDigit(Arr);

    printf("Count digit is : %d\n",iRet);

    return 0;
}