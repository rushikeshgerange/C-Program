// Problems on digits

#include<stdio.h>

int SumDigits(int iNo)
{
    auto int iDigit = 0;
    auto int iSum = 0;

   while(iNo != 0)
   {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;

   }
   return iSum;
   
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}