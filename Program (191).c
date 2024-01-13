// Problems on String

#include<stdio.h>

void Display(char *str)
{
    printf("String is : %s\n",str);
}

int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}