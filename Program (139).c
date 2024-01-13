#include<stdio.h>
#include<stdlib.h>

int EvenDisplay(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
       if((Arr[iCnt] % 2) ==0)
       {
            iEvenCnt++;
       }
    }
    return iEvenCnt;
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

    for(iCnt=0; iCnt < iCount; iCnt++)             // time complexity is O(N)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = EvenDisplay(ptr,iCount);

    printf("Number of even elements of the array is : %d\n",iRet);

    free(ptr);

    printf("\nDynamic menory gets deallocated successfully. \n");

    return 0;
}