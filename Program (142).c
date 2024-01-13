#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;


    for(iCnt=0; iCnt < iSize; iCnt++)
    {
       iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = Addition(ptr,iCount);

    printf("Addition of the all elements in array is : %d\n",iRet);

    free(ptr);

    printf("\nDynamic menory gets deallocated successfully. \n");

    return 0;
}