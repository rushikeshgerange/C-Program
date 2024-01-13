// Problems on N numbers

#include<stdio.h>    // for printf And scanf
#include<stdlib.h>   // for malloc and free

void Display(int Arr[], int iSize)            // Arr[] call by value
{
    int iCnt = 0;

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        printf("%d \t", Arr[iCnt]);
    }
    printf("\n");

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));           // Dynamic memory allocation

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iCount);              

    free(ptr);

    return 0;
}