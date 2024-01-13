#include<stdio.h>
#include<stdlib.h>    // For dynamic memory allocation

int main()
{ 
    int Arr[5];
    float fValue;
    double Brr[4];

    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 11;
    ptr[2] = 21;

    free(ptr);

    return 0;
}