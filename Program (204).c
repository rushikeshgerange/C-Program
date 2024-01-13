// Problems on String

#include<stdio.h>

void Replace(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str=='a')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    Replace(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}