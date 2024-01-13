// Problems on digits

#include<stdio.h>

void Display(int iNo)
{
    auto int iDigit = 0;

    printf("Value of iNo is : %d\n",iNo);      //721

    printf("___________________________________\n");
     printf("Value of iNo is : %d\n",iNo); 
    iDigit = iNo % 10;       
    printf("Digit is : %d\n",iDigit);        //1
    iNo = iNo / 10;                          //72                
     
    printf("Value of iNo is : %d\n",iNo);
    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);        //2
    iNo = iNo / 10;                          //7

    printf("Value of iNo is : %d\n",iNo);
    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);        //7
    iNo = iNo / 10;                          //0
    printf("Value of iNo is : %d\n",iNo); 
}

int main()
{
    auto int iValue = 721;

    //printf("Enter Number : ");
    //scanf("%d",&iValue);

    Display(iValue);

    return 0;
}