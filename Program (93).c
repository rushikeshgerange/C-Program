#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard == 1)
    {
            printf("Your class is 1st class and your exam time is 8 AM \n");
    }
    else if(iStandard == 2)
    {
            printf("Your class is 2nd class and your exam time is 9 AM \n");
    }
    else if(iStandard == 3)
    {
            printf("Your class is 3rd class and your exam time is 10 AM \n");
    }
    else if(iStandard == 4)
    {
            printf("Your class is 4th class and your exam time is 11 AM \n");

    }
    else if(iStandard == 5)
    {
            printf("Your class is 5th class and your exam time is 12 PM \n");
    }
    else
    {
            printf("Invalid Class \n");
    }
    
};
int main()
{
    auto int iClass = 0;

    printf("Enter Your class : ");
    scanf("%d",&iClass);

    DisplayExamTime(iClass);


    return 0;
}