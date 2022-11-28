#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *createList(node *head)
{
    node *temp = NULL;
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Memory Full..!");
        exit(1);
    }
    printf("Enter Data ELement \n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        head->next = head;
        return head;
    }
    else
    {
        node *p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        p->next = head;
        p = NULL;
        temp = NULL;
        return head;
    }
}

void displayList(node *head)
{
    if (head == NULL)
    {
        printf("List is Empty \n");
        exit(0);
    }
    else
    {
        node *p = NULL;
        p = head;
        do
        {
            printf("%d", p->data);
            p = p->next;
        } while (p != head);
    }
}
int main()
{
    printf("Welcome to Circular LL \n");
    printf("Enter No. of Elemets to be inserted \n");
    int n;
    node *head = NULL;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        head = createList(head);
    }

    displayList(head);
}
