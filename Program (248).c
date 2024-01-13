// Stack in data structure
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

// void InsertFirst(PPNODE Head, int No);
void Push(PPNODE Head, int No)
{
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
        newn->next = *Head;
        *Head = newn;
    }
}

// void DeleteFirst(PPNODE Head)
int Pop(PPNODE Head)
{
    PNODE temp = *Head;
    int iValue = 0;

    if(*Head == NULL)
    {
        printf("Stack is empty.. \n");
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
    printf("Elements of the stack are : \n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    Push(&First,101);
    Push(&First,51);
    Push(&First,21);
    Push(&First,11);

    Display(First);

    iRet = Pop(&First);
    printf("Popped element is : %d\n",iRet);
    Display(First);

    iRet = Pop(&First);
    printf("Popped element is : %d\n",iRet);
    Display(First);

    iRet = Pop(&First);
    printf("Popped element is : %d\n",iRet);
    Display(First);


    iRet = Pop(&First);
    printf("Popped element is : %d\n",iRet);
    Display(First);


    iRet = Pop(&First);
    printf("Popped element is : %d\n",iRet);
    Display(First);


    return 0;
}