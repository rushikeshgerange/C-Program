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

}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    
}

void Display(PNODE Head, PNODE Tail)
{

}

int Count(PNODE Head, PNODE Tail)
{
    return 0;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{

}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    return 0;
}