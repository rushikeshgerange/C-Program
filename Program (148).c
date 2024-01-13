#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(ptr,iCount);

    printf("Minimum array elements is : %d\n",iRet);

    free(ptr);

    printf("\nDynamic memory deallocate successfully.\n");

    return 0;
}