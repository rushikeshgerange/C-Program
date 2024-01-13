// Queue
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// void InsertLast(PPNODE Head, int No);
void Enqueue(PPNODE Head, int No)
{
    PNODE temp = *Head;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

// void DeleteFirst(PPNODE Head)
int Dequeue(PPNODE Head)
{
    PNODE temp = *Head;
    int iValue = 0;

    if(*Head == NULL)
    {
        printf("Queue is empty.. \n");
    }
    else
    {
        iValue = (*Head)->data;
        *Head = (*Head)->next;
        free(temp);
    }
    return iValue;
}

void Display(PNODE Head)
{
    printf("Elements of the queue are : \n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    Enqueue(&First,11);
    Enqueue(&First,21);
    Enqueue(&First,51);
    Enqueue(&First,111);
    Enqueue(&First,121);

    Display(First);

    iRet = Dequeue(&First);
    printf("Dequeue elements is : %d\n",iRet);
    Display(First);

    iRet = Dequeue(&First);
    printf("Dequeue elements is : %d\n",iRet);
    Display(First);


   
    return 0;
}