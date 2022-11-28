#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node * reverse(node *head){
    node *current=NULL,*prev=NULL,*next=NULL;
    current=head;
    while (current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
    
}
void printData(node *head){
    node *p=head;
    do
    {
        printf("Element is %d \n",p->data);
        p=p->next;
    } while (p!=NULL);   

}
int main(){
node *first,*second,*third,*fourth,*head;
    
    first=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));
    fourth=(node *)malloc(sizeof(node));

    head=first;
    first->data=40;
    first->next=second;

    second->data=41;
    second->next=third;
    
    third->data=43;
    third->next=fourth;
    
    fourth->data=45;
    fourth->next=NULL;
    printf("Before Reversal of Linked List ;-");
    printData(head);
    head=reverse(head);
    printf("After Reversal of Linked List ;-");
    printData(head);


}
