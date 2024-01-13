// Problems on String

#include<stdio.h>

int CountVowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='u'))
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

    iRet = CountVowels(Arr);

    printf("Frequency of vowel is : %d\n",iRet);

    return 0;
}