#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    
//  if((cValue >= 65) && (cValue <=90))
    if((cValue >= 'A') && (cValue <='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("It is capital letter \n");
    }
    else
    {
        printf("It is not capital letter \n");
    }

    return 0;
}