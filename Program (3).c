#include<stdio.h>

int main()
{
    int Arr[5] = {11,21,51,101,111};

    printf("Base address of array is :%d\n",Arr);

    printf("Base address of first element is :%d\n",&(Arr[0]));

    printf("Address of second element is :%d\n",&(Arr[1]));

    printf("First element is : %d\n",Arr[0]);

    printf("Size of whole array is :%d\n",sizeof(Arr));

    printf("Size of second element is :%d\n",sizeof(Arr[1]));

    return 0;
}