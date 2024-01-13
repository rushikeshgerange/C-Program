// Problems on String

#include<stdio.h>

int SmallLetter(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = SmallLetter(Arr);

    printf("Small letters occurs %d times",iRet);

    return 0;
}