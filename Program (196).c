// Problems on String

#include<stdio.h>

int Count(char str[], char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character for frequency calculation : ");
    scanf(" %c",&cValue);

    iRet = Count(Arr,cValue);

    printf("%c occurs in string is %d times\n",cValue,iRet);

    return 0;
}