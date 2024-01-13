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

void InsertLast(PPNODE Head,int No)
{
    // Temporary pointer to LL traversal
    PNODE Temp = *Head;

    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {            // Travel the LL till last node
       while(Temp->next != NULL)
       {
            Temp = Temp->next;
       }
       // Add the address of new node at the end of 
       Temp->next = newn;
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

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)    // Case 1
    {
        return;
    }
    else if((*Head)->next == NULL)   //Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else     //Case 3
    {
        *Head = (*Head)->next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)    // Case 1
    {
        return;
    }
    else if((*Head)->next == NULL)   //Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else     //Case 3
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int i = 0;
    PNODE Temp = *Head;
    PNODE newn = NULL;

    int Size = Count(*Head);

    // Case 1 : Invalid Position

    if((iPos < 1) || (iPos > Size +1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)   // Case 2 : First Position
    {
        InsertFirst(Head, No);
    }
    else if(iPos == Size + 1)  // Case 3 : Last Position
    {
        InsertLast(Head, No);
    }
    else    // Case 4 : Position is in between First and Last
    {

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for(i=1; i < iPos-1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int i = 0;
    PNODE Temp = *Head;
    PNODE targetednode = NULL;

    int Size = Count(*Head);

    // Case 1 : Invalid Position

    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)   // Case 2 : First Position
    {
        DeleteFirst(Head);
    }
    else if(iPos == Size)  // Case 3 : Last Position
    {
        DeleteLast(Head);
    }
    else    // Case 4 : Position is in between First and Last
    {
        for(i=1; i < iPos-1; i++)
        {
            Temp = Temp->next;
        }
        targetednode = Temp->next;

        Temp->next = Temp->next->next;
        free(targetednode);

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
    InsertFirst(&First,121);

    InsertAtPos(&First,105,5);

    DeleteAtPos(&First,5);

    Display(First);

    iRet = Count(First);
    printf("Total number of nodes are : %d\n",iRet);

    return 0;
}