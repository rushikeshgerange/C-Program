// Problem Statement : Accept 2 values from user and perform the addition ?

// Step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition

// Step 2 : Write the algorithm
/*
    START
    Accept first number from user and store it into no1
    Accept second number from user and store it into no2
    Create one variable to store the result named as And
    Perform the addition of no1 & no2 , store the result in Ans
    Display the result from Ans to user
    STOP
*/

// Step 3 : Choose the language to write the program ( C, C++, Java,Python)
//    We write the progrma in C language

#include<stdio.h>

int main()
{
    int i , j , k;

    printf("Enter first number : \n");
    scanf("%d", &i);

    printf("Enter second number : \n");
    scanf("%d", &j);

    k = i + j;

    printf("Addition of two number is : %d\n",k);

    return 0;
}