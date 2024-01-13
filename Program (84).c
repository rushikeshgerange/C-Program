// Problem Statement : Accept one number from user and return its cube

// Step 1 : Understand the problem statement
// Conclusion : 

//Step 2 : Algorithm

/*
    START
        Accept one number from user and store it into Number
        create one variable to store the result 

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//       Function Name      : CalculateCube
//       Description        : we calculate the number of cube
//       
// 
// 
// 
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


long int CalculateCube(int iValue)
{
    long int iAns = 0;
    iAns = iValue * iValue * iValue;
    return iAns;
};

int main()
{
    auto int iNumber = 0;
    auto long int iCube = 0;

    printf("Enter the number : ");
    scanf("%d", &iNumber);

    iCube = CalculateCube(iNumber);

    printf("Cube is : %ld" , iCube);

    return 0;
}