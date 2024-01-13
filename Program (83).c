// Problem Statement : Accept radius from user and calculate the area of circle

// Step 1 : Understand the problem statement
// Conclusion : We are going to use the formula PI*R*R

// Step 2 : Algorithm

/*
    START
        Accept radius from user and store it into Radius
        Create variable PI and store value 3.14
        Calculate Area PI*Radius*Radius
        Display the value of area to the user
    STOP
*/

// Step 3 : Decide the programming language
// We select C programming

// Step 4 : Write the program

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//     Function Name    : Calculate Area
//     Description      : It is used to calculate area of circle
//     Input Arguments  : float
//     Output           : float
//     Author           : Rushikesh Keshav Gerange
//     Date             : 02/10/2023
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define PI  3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f; 
    fAns = PI * fValue * fValue;
    return fAns;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//     Entry point function to calculate radius of circle
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius :");
    scanf("%f",& fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of circle is : %f\n",fArea);

    return 0;
}

// Step 5 : Test the Code

/*
    Test case 1 :
    Radious = 5
    output : 78.50000

    Test case 2 :
    Radious = -6
    Output  : 113.040001
*/