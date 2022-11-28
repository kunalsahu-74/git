#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;
node *head=NULL;

int listLength(){
    int count =0;
    if (head==NULL)
    {
        return 0;
    }else{
        node *p=head;
        do 
        {
            count++;
            p=p->next;
        }while(p!=NULL);
        return count;
    }
    
}

void DeleteAtEnd(){
    // case when no linkedlist exist
    if (head==NULL){
        printf("No Linked list exist so no node to delete");
        exit(1);
    }
    printf("\n----- Deleting Node at END -----");
    // case when there is only 1 element in the linked list
    if (head->next==NULL){
        free(head);
        head=NULL;
        exit(1);
    }
    node *p, *q=head;
    while (q->next!=NULL){
        p=q;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    p=NULL;
    q=NULL;
}

// WAP to delete the beginning node of the linked list
void DeleteAtBegin(){
    if (head==NULL){
        printf("Deletion of node not possible. Linked list is empty.\n");
        exit(1);
    }
    printf("\n----- Deleting Node at BEGIN -----");
    if (head->next==NULL){
        free(head);
        head=NULL;
    }
    else {
        node *p=head;
        head = head->next;
        free(p);
        p=NULL;
    }
}

// WAP to delete a node at a given position
void DeleteAtPos(int pos){
    int length = listLength(head);
    if (pos<=0 || pos>length){
        printf("Invaid Position. ");
        exit(1);
    }
    printf("\n----- Deleting Node at pos [%d] -----", pos);
    if (pos==1) {
        printf("DeleteAtBegin(head) INVOKED\n");
        DeleteAtBegin(head);
    }
    else if (pos==length) {
        printf("DeleteAtEnd(head) INVOKED\n");
        DeleteAtEnd(head);
    }
    else{
        int k=1;
        node *p, *q=head;
        while (k<pos){
            p=q;
            q=q->next;
            k++;
        }
        p->next=q->next;
        free(q);
        p=NULL;
        q=NULL;
    }
}

void createNode(){
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if (temp==NULL)
    {
        printf("Memory not available in the stack");
        return;
    }
    printf("Enter Data in the Node \n");
    temp->data=5;
    temp->next=NULL;
    if (head==NULL)
    {
        head=temp;
    }else{
        node *p=head;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        p = NULL;
        temp = NULL;
        free(p);       
    }
}

void printData(){
    if (head==NULL)
    {
        printf("No Data is Present \n");
        return;
    }
    node *ptr=head;
    do
    {
        printf("Data is [%d] \n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=NULL);
}


int main(){
    for (int i = 0; i < 4; i++)
    {
        createNode();
    }
    DeleteAtBegin();
    printf("Element deleted successfully from the beginning \n");
    printData();
    DeleteAtEnd();
    printf("Element deleted successfully from the end \n");
    printData();
    DeleteAtPos(2);
    printf("Element deleted successfully at a given position \n");
    printData();


    
}
