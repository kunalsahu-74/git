#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue{
int data;
struct queue *next;
};
typedef struct queue queue;
queue *front=NULL;
queue *rear=NULL;
void enqueue(int x){
    queue *temp=(queue *)malloc(sizeof(queue));
    if (temp==NULL)
    {
        printf("Memory is Full \n");
        return;
    }
    temp->data=x;
    temp->next=NULL;
    if (front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        // rear points to the top of the queue ;)
        rear=temp;
    }    
}

int dequeue(){
    queue *p;
    if (front==NULL)
    {
        printf("Queue is Empty \n");
        return -1;
    }
    else{
        p=front;
        front=front->next;        
    }
    return p->data;
    free(p);
    p=NULL;
}

void display(){
    if (front==NULL)
    {
        printf("Queue is Empty \n");
        return;
    }
    // Queue is not empty
    queue *q=front;
    while (q->next!=rear->next)
    {
        printf("[Data]->%d\n",q->data);
        q=q->next;
    }    
     printf("[Data]->%d\n",q->data);
}

int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(9);
    enqueue(15);
    display();
    printf("The Element deleted is %d \n",dequeue());
    display();
    return 0;
}