#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int Arr[],int iSize)
{
    int iCnt = 0;

    printf("\nOdd elements of the array are : \n");

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
       if((Arr[iCnt] % 2) !=0)
       {
            printf("%d\t",Arr[iCnt]);
       }
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;

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

    OddDisplay(ptr,iCount);

    free(ptr);

    printf("\nDynamic menory gets deallocated successfully. \n");

    return 0;
}