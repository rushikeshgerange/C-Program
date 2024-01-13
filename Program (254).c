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

int FirstOcc(PNODE Head,int No)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if((Head->data ) == No)
        {
             break;
        }
        Head = Head->next;
        iPos++;
    }

    if(Head == NULL)
    {
        return -1;
    }
    else
    {
        return iPos;
    }   
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    iRet= FirstOcc(First,51);
    printf("FirstOcc is : %d\n",iRet);

    return 0;
}