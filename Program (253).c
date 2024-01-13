// Singly Linear linked list

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}


void Display(PNODE Head)
{
    printf("Elements of the linked list are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Frequency(PNODE Head, int No)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if((Head->data) == No)
        {
            iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

int Sum(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + (Head->data);
        Head = Head->next;
    }
    return iSum;
}

int EvenSum(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if((Head->data ) % 2 == 0)
        {
             iSum = iSum + (Head->data);
        }
        Head = Head->next;
    }
    return iSum;
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First,20);
    InsertFirst(&First,100);
    InsertFirst(&First,20);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    int iSum = Frequency(First,20);
    printf("Frequency is : %d\n",iSum);

    return 0;
}