#include<stdio.h>

int main()
{
    int arr[3] = {21,43,54};
    int X = 0;

    X = arr[2] + 21 + arr[0];
    X++;

    printf("%d\n",X);

    return 0;
}