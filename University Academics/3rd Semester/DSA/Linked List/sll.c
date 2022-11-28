#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

node *head=NULL;

node* getNode(int data)
{
    // allocating space
    node* newNode = (node *)malloc (sizeof(node)); 
    // inserting the required data
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
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
        printf("Data is [%5d] \n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=NULL);
    
}

int countNodes(node *head){
    if (head==NULL)
    {
        return 0;
    }
    return 1+countNodes(head->next);
    
}



int main(){
    printf("Enter No. of Nodes to be Inserted \n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    createNode();
    }
    printf("Enter No. of Nodes to be Inserted \n");
    node *head1=head;
    printf("No. of Nodes Present is %d \n",countNodes(head1));
    printData();
    return 0;
}