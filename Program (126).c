// Problems on digits

#include<stdio.h>

int CountDigits(int iNo)
{
    auto int iCnt = 0;

   while(iNo != 0)
   {
        iNo = iNo /10;
        iCnt++;
   }
   return iCnt;
   
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}