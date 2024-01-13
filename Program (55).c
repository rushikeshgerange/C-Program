#include<stdio.h>

int main()
{
    char A= 'X';
    int B = 10;
    float C = 12.31f;
    double D= 89.90;

    printf("Size of Character is %d bytes\n",sizeof(A));
    printf("Size of integer is %d bytes\n",sizeof(B));
    printf("Size of float is %d bytes\n",sizeof(C));
    printf("Size of double is %d bytes\n\n",sizeof(D));

    printf("Base address of character is : %d\n",&A);
    printf("Base address of integer is : %d\n",&B);
    printf("Base address of float is : %d\n",&C);
    printf("Base address of double is : %d\n",&D);

    return 0;
}