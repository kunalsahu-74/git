#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};

typedef struct node node;
node *head=NULL;

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

node * getNode(int data)
{
    // allocating space
    node * newNode = (node *)malloc (sizeof(node)); 
    // inserting the required data
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

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


void insertAtEnd(){
    node *temp=(node *) malloc (sizeof(node));
    if (temp==NULL)
    {
        exit(1);
    }
    printf("Enter Data in the Node \n");
    scanf("%d",&temp->data);
    if (head==NULL)
    {
        head=temp;
    }else{
        node *p;
        p=head;
        while (p->next!=NULL)
        {
           p=p->next;
        }
        p->next=temp;
        temp->next=NULL;
    }
}



void insertDataAtBeginning(){
    printf("Data to be Inserted\n");
    node *temp;
    temp=(node *) malloc(sizeof(node));
    printf("Enter Data Element \n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if (head==NULL)
    {
        printf("No ELements Present and new element is inserted Successfully \n");
        head=temp;
    }
    else{
        
        temp->next=head;
        head=temp;
        printf("Node inserted Successfully..! \n");
    }
}

void insertAtgivenPos(int pos){
    node *temp;
    temp=(node *) malloc(sizeof(node));
    int len=listLength();
    if (pos<=0 || pos>len+1)
    {
        printf("Invalid Position \n");
    }
    else if (pos==1)
    {
        insertDataAtBeginning();
    }
    else if (pos==len+1)
    {
        insertAtEnd();
    }
    else{
        node *p=head;
        int k=1;
        if (temp==NULL)
        {
            exit(1);
        }
        printf("Enter Data Elements \n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        while (k<pos)
        {
            p=p->next;
            k++;
        }
        temp->next=p->next;
        p->next=temp;
        p=NULL;
        temp=NULL;
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

int main()
{
    // for (int i = 0; i < 3; i++)
    // {
    //     createNode();
    // }
    
    // insertDataAtBeginning();
    insertDataAtBeginning();
    insertAtgivenPos(2);
    printf("Length of the Linked list is %d \n ",listLength());
    printData();
    return 0;
}