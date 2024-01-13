// Problems on digits

#include<stdio.h>

void Display(int iNo)
{
    auto int iDigit = 0;

   //joparyant iNo zero peksha motha ahe toparyant fira
    while(iNo > 0)
    {
        printf("____________________________\n");
        iDigit = iNo % 10;
        printf("Digit is : %d\n",iDigit);
        iNo = iNo /10;
        printf("Number is : %d\n",iNo);
    }
   
}

int main()
{
    auto int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}