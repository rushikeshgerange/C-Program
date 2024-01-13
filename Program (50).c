// Accept the number from the user and check the number is even or odd ?
#include<stdio.h>

int main()
{
    int No = 0;
    int Ans = 0;

    printf("Enter the number :\n");
    scanf("%d",&No);

    Ans = No % 2;
    
    if(Ans == 0)
    {
        printf("Number %d is even \n",No);
    }
    else
    {
        printf("Number %d is odd \n",No);
    }
    return 0;
}