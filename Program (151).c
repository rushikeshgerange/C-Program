#include<stdio.h>
#include<stdlib.h>

int CheckFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iValue = 0;

    printf("Enter how many elements you want in array : ");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic Memory gets allocated successfully for %d elements \n",iCount);

    printf("Enter the %d values : \n",iCount);

    for(iCnt=0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the elements that you want to search : \n");
    scanf("%d",&iValue);

    iRet = CheckFrequency(ptr, iCount, iValue);

    printf("%d occurs %d times \n",iValue,iRet);

    free(ptr);

    printf("\nDynamic memory deallocate successfully.\n");

    return 0;
}