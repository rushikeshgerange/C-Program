// Problems on String

#include<stdio.h>

int CountA(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
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

    iRet = CountA(Arr);

    printf("a occurs in string is %d times\n",iRet);

    return 0;
}