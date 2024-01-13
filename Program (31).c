#include<stdio.h>

int main()
{
    int A = 10;
    int B = 10;
    int C = 10;
    int D = 10;

    A++;
    ++B;

    C--;
    --D;

    printf("%d\n",A);
    printf("%d\n",B);

    printf("%d\n",C);
    printf("%d\n",D);

    return 0;
}