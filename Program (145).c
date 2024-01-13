#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
       
    }
    return ((float)iSum / (float)iSize);
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

    printf("Enter number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory allocated successfully. \n");

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,iCount);

    printf("Average of array elements are : %f\n",fRet);

    free(ptr);

    printf("Dynamic memory deallocate successfully.\n");

    return 0;
}