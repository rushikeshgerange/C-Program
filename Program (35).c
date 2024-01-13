#include<stdio.h>

int main()
{
    int i= 1;
    int Count = 0;
    
    printf("How many time you want to display JAY GANESH on screen : ");
    scanf("%d",&Count);

    do
    {
        printf("Jay Ganesh...\n");
        i++;
    }
    while(i<=Count);

    return 0;
}