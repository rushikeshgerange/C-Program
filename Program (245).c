// Doubly circular linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->prev = *Tail;
        (*Tail)->next = newn;
        *Tail = newn;   
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
    
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    printf("\nElements of the linked list are : \n");

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d |<=>",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);
    }    
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
        }while(Head != Tail->next);
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int i = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;
    
    int size = 0;
    size = Count(*Head,*Tail);

    if((iPos < 1) || (iPos > size+1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,Tail,No);
    }
    else if(iPos == size+1)
    {
        InsertLast(Head,Tail,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(i=1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{

}

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    int iRet = 0;
    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d\n",iRet);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d\n",iRet);

    InsertAtPos(&First,&Last,105,5);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d\n",iRet);

    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d\n",iRet);

    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("\nTotal number of nodes in the linked list are : %d\n",iRet);

    return 0;
}