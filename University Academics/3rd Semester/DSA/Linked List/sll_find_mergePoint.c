// For Algorithm Working and Explanation Refer notebook
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;

void printData(node *head){
    node *p=head;
    do
    {
        printf("Element is %d \n",p->data);
        p=p->next;
    } while (p!=NULL);   

}

int listLength(node * head){
    node *p;
    int count=0;
    if (head==NULL)
    {
    return 0;
    }
    else{
        p=head;
        do
        {
            count++;
            p=p->next;
        } while (p!=NULL);
        return count;        
    }
    
}

node * mergepoint(node *head,node * head1){
int l1=listLength(head);
int l2=listLength(head1);
int diff=0,count=0;
node *tempLarge=NULL;
if (l1>l2)
{
    diff=l1-l2;
    tempLarge=head;
    do
    {   count++;
        tempLarge=tempLarge->next;
        if (count==diff)
        {
            break;
        }
        
    } while (tempLarge!=NULL);
    node *p=tempLarge,*q=head1;
    do
    {
        if (p->next==q->next)
        {
            printf("Found the Merge Point ;) \n");
            return p->next;
        }
        p=p->next;
        q=q->next;
        
    } while (p!=NULL && q!=NULL);
    return NULL;
    
}else{
    diff=l2-l1;
    tempLarge=head1;
    do
    {   count++;
        tempLarge=tempLarge->next;
        if (count==diff)
        {
            break;
        }
        
    } while (tempLarge!=NULL);
    node *p=head,*q=tempLarge;
    do
    {
        if (p->next==q->next)
        {
            printf("Found the Merge Point ;) \n");
            return p->next;
        }
        p=p->next;
        q=q->next;
        
    } while (p!=NULL && q!=NULL);
    return NULL;
    
}

}
int main(){
node *first,*second,*third,*fourth,*head;
node *ifirst,*isecond,*ithird,*ifourth,*ififth,*ihead;

    first=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));
    fourth=(node *)malloc(sizeof(node));


    ifirst=(node *)malloc(sizeof(node));
    isecond=(node *)malloc(sizeof(node));
    ithird=(node *)malloc(sizeof(node));
    ifourth=(node *)malloc(sizeof(node));
    ififth=(node *)malloc(sizeof(node));

    head=first;
    first->data=40;
    first->next=second;

    second->data=41;
    second->next=third;
    
    third->data=43;
    third->next=fourth;
    
    fourth->data=45;
    fourth->next=NULL;
    
    ihead=isecond;
    // ifirst->data=40;
    // ifirst->next=isecond;

    isecond->data=41;
    isecond->next=third;
    
    // ithird->data=43;
    // ithird->next=ifourth;
    
    // ifourth->data=45;
    // ifourth->next=ififth;

    // ififth->data=600;
    // ififth->next=NULL;
    node *check=mergepoint(head,ihead);
    if (check==NULL)
    {
       printf("No Merge point Found ;)");
    }else{
        printf("Mergepoint Found and Data found is %d",check->data);
    }
        
}
