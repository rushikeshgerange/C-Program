#include<stdio.h>

int main()
{
    char Arr[40];

    printf("Enter your name : ");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your Name is : %s\n",Arr);

    return 0;
}