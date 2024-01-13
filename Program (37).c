#include<stdio.h>

int i;
int j = 11;
extern int no;
int main()
{
    printf("Value of i : %d\n", i);
    printf("Value of i : %d\n", j);
    printf("Value of i : %d\n", no);

    return 0;
}