#include<stdio.h>
#include<stdlib.h>

void DisplayArray(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt]) % 2) ==0)
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

    printf("Enter how many elements you want : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter elements : \n");

    for(iCnt=0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayArray(ptr,iCount);

    return 0;
}