#include<stdio.h>

void Display()
{
    register int no = 11;
    register int i;

    printf("Value of no is : %d\n",no);
    printf("Value of i is : %d\n",i);
}

int main()
{
    Display();

   // printf("%d\n",no);

    return 0;
}