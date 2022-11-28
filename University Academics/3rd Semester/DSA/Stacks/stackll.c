#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

void createNode();
void PrintLinkedList();
void push(int);
int pop();
int peek(int);
int stackTop();
int isFull();

node *head = NULL;
node *TOP = NULL;

void createNode()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Memory is Full \n");
        return;
    }
    printf("Enter Data to be inserted \n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        TOP = head;
    }
    else
    {
        node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        TOP = temp;
        p = NULL;
        temp = NULL;
        free(p);
    }
}
void PrintLinkedList()
{
    if (head == NULL)
    {
        printf("The linked List is empty.");
        exit(1);
    }
    else
    {
        node *p = head;
        do
        {
            printf("Address [%p] : data = [%d], next = [%p]\n", p, p->data, p->next);
            p = p->next;
        } while (p != NULL);
    }
}
void push(int x)
{
    TOP = head;
    node *temp = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        head = temp;
    }
    if (temp == NULL)
    {
        printf("Stack Overflow");
    }
    else
    {
        temp->data = x;
        temp->next = TOP;
        TOP = temp;
        head = TOP;
    }
}

int pop()
{
    int x = -1;
    if (TOP == NULL)
    {
        printf("Stack is empty \n");
    }
    else
    {
        x = TOP->data;
        TOP = TOP->next;
        head = TOP;
    }
    return x;
}

int peek(int pos)
{
    // Finding the Element at a given position..!
    int x = -1;
    node *p = TOP;
    for (int i = 0; p != NULL && i < pos - 1; i++)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        return p->data;
    }
    else
    {
        return x;
    }
}

int stackTop()
{
    if (TOP != NULL)
    {
        return TOP->data;
    }
    else
    {
        return -1;
    }
}

int isEmpty()
{
    return TOP != NULL ? 0 : 1;
    // If stack is empty it will return 1
    // If stack is not empty it will return 0
}

int isFull()
{
    node *t = (node *)malloc(sizeof(node));
    // If stack is not null then assign 1 else assign 0;
    if (t != NULL)
    {
        free(t);
        return 1;
    }
    else
    {
        free(t);
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter No. of Nodes \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        createNode();
    }

    printf("Data in TOP is :%d \n", TOP->data);
    printf("Pushing Data inside the stack \n");
    push(9);
    push(100);
    push(800);
    printf("Data in TOP is :%d \n", TOP->data);

    int x = pop();
    printf("Deleted Node contains %d \n", x);

    printf("Printing Data in the Nodes:-\n");
    PrintLinkedList();

    printf("Element at an given index is %d \n", peek(2));
    printf("Data at Top of the Stack is %d \n", stackTop());
    printf("Check whether Stack is empty or not :%d \n", isEmpty());
    printf("Printing Data in the Nodes:-\n");
    PrintLinkedList();

    return 0;
}
// Beautify the Code: Shift + Alt +F