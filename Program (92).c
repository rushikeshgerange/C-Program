#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    switch (iStandard)
    {
        case 1:
            printf("Your class is 1st class and your exam time is 8 AM \n");
        break;
        case 2:
            printf("Your class is 2nd class and your exam time is 9 AM \n");
        break;
        case 3:
            printf("Your class is 3rd class and your exam time is 10 AM \n");
        break;
        case 4:
            printf("Your class is 4th class and your exam time is 11 AM \n");
        break;
        case 5:
            printf("Your class is 5th class and your exam time is 12 PM \n");
        break;
        default:
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