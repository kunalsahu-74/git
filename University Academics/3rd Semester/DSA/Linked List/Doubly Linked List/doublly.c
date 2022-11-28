#include<stdio.h>
#include<stdlib.h>

struct DLLnode{
struct DLLnode *prev;
int data;
struct DLLnode *next;
};
typedef struct DLLnode node;
void displayData(node *head){
    if (head==NULL)
    {
        printf("No nodes are present \n");
        return;
    }
    else{
 
    node *p=head;
    do
    {
        printf("Element is %d \n",p->data);
        p=p->next;
    } while (p!=NULL);   
    }
}
node * insertAtBegin(node *head){
    node *temp;
    temp=(node * )malloc(sizeof(node));
    if (temp==NULL)
    {
        printf("Memory Not Available \n");
        exit(1);
    }
    temp->prev=NULL;
    temp->data=700;
    temp->next=NULL;
    if (head==NULL)
    {
        printf("Insertion Successfull when head is nULL \n");
       head=temp;
       return head;
    }else{
        temp->next=head;
        head->prev=temp;
        head=temp;
        printf("Insertion Successfull when head is not nULL \n");
        return head;
    }
    
}

node *  deleteAtBeg(node *head){
    if (head==NULL)
    {
        printf("No Nodes are Present");
        return NULL;
    }
    else if (head->next=NULL)
    {
        free(head);
        head=NULL;
        return head;
    }else{
        node*p=head;
        head=head->next;
        head->prev=NULL;

        free(p);
        p=NULL;
        return head;
    }
}

int main(){
node *first,*second,*third,*fourth,*head;
    
    first=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));
    fourth=(node *)malloc(sizeof(node));

    head=first;
    first->prev=NULL;
    first->data=40;
    first->next=second;

    second->prev=first;
    second->data=41;
    second->next=third;
    
    third->prev=second;
    third->data=43;
    third->next=fourth;
    
    fourth->prev=third;
    fourth->data=45;
    fourth->next=NULL;
    head=insertAtBegin(head);
    displayData(head);
    head=deleteAtBeg(head);
    displayData(head);
    return 0;
}