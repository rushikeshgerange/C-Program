#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    printf("ASCII value of %c in decimal is : %d\n",ch,ch);

    printf("ASCII value of %c in octal is : %o\n",ch,ch);

    printf("ASCII value of %c in hexadecimal is : %x\n",ch,ch);

    return 0;
}