// Problems on String

#include<stdio.h>

int ReplaceVowels(char str[])
{
    while(*str != '\0')
    {
        if((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U') || (*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    ReplaceVowels(Arr);

    printf("Updated strinf is : %s\n",Arr);

    return 0;
}