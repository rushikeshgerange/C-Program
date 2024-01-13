#include<stdio.h>

int CalculateLength(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

};

int main()
{
    char Arr[40];
    int iRet = 0;

    printf("Enter your name : ");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your Name is : %s\n",Arr);

    iRet = CalculateLength(Arr);

    printf("Length of string is : %d\n",iRet);

    return 0;
}