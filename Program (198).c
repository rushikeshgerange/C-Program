// Problems on String

#include<stdio.h>

int CapitalCount(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CapitalCount(Arr);

    printf("Capital letters occurs %d times",iRet);

    return 0;
}