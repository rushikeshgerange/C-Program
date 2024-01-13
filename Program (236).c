#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))     // LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else                            // LL Contain atleast 1 node
    {
        newn->next = *Head;
        *Head = newn;
    } 
    (*Tail)->next = *Head;          // #
    
}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))     // LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
    else                            // LL Contain atleast 1 node
    {
        (*Tail)->next = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int ipos)
{
    
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))      // Case 1
    {
        return;
    }
    else if(*Head == *Tail)             // Case 2
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else                // Case 3
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

    if((*Head == NULL) && (*Tail == NULL))      // Case 1
    {
        return;
    }
    else if(*Head == *Tail)             // Case 2
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else                // Case 3
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{

}

void Display(PNODE Head, PNODE Tail)
{
    printf("\nElements of the linked list are : \n");

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | -> ",Head->data);
            Head = Head->next;
        }
        while(Head != Tail->next);
    }

    printf("Address of first node");
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        }
        while(Head != Tail->next);
    }

    return iCnt;

}

int main()
{
    int iRet = 0;
    PNODE First = NULL;
    PNODE Last = NULL;          // #

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d \n",iRet);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d \n",iRet);

    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d \n",iRet);

    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d \n",iRet);

    return 0;
}