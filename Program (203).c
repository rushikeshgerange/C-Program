// Problems on String

#include<stdio.h>

int CountSpace(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str==' ')
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

    iRet = CountSpace(Arr);

    printf("Frequency of space bar is : %d\n",iRet);

    return 0;
}