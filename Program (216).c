#include<stdio.h>
#include<stdlib.h>

// structure declaration
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialise the node
    newn->data = No;
    newn->next = NULL;

    // Check whether the linked list is empty or not

    if(*Head == NULL)        // LL is empty
    {
        *Head = newn;
    }
    else          // LL contain at least 1 node in it
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while( Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,51);     // InsertFirst(60,51)
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    return 0;
}