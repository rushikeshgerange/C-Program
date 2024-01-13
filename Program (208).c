// Problems on String

#include<stdio.h>

void strtoggleX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    } 
}

int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}