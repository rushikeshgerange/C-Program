#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *p = NULL;
    int cnt = 0;

    printf("Enter number of elements : ");
    scanf("%d",&size);

    p = (int *)malloc(size * sizeof(int));

    printf("Enter Elements : ");
    
    for(cnt=0; cnt<size; cnt++)
    {
        scanf("%d",&p[cnt]);
    }

    printf("Enter elements are : ");

    for(cnt=0; cnt<size; cnt++)
    {
        printf("%d \t",p[cnt]);
    }

    free(p);

    return 0;
}