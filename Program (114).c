#include<stdio.h>

void DisplayFactor(int iNo)
{
    auto int iCnt = 0;

    printf("Factors of %d are : \n",iNo);

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            printf("%d \n",iCnt);
        }
    }

};

int main()
{
    auto int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    
    return 0;
}



// Time Complexity : O(N/2)