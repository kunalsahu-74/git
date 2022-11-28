#include<stdio.h>
#include<conio.h>
#define size 5
void enqueue(int *q,int n,int *f,int *r,int x){
    // Q->Queue
    // n->size of the elememnt
    // f->front
    // r->rear
    // x->element
    if (*r==n-1)
    {
        printf("Overflow Condition..!");
        return;
    }
    else if (*r==-1)
    {
        (*f)++;
        (*r)++;
    }else{
        (*r)++;
    }
    q[*r]=x;    
}

int deque(int *q,int n,int *f,int *r){
    int x;
    if (*f==-1)
    {
        printf("Underflow Condition..!");
        return -1;
    }
    x=q[*f];
    if (*f==*r)
    {
        // when front == Rear i.e last elememt has been deleted or last deleltion 
        // Set Front =-1 and rear=-1
        *f=-1;
        *r=-1;
    }else{
        (*f)++;
    }
    return x;
}

int main()
{
    int arr[size];
    int f=-1,r=-1;
    enqueue(arr,size,&f,&r,5);
    enqueue(arr,size,&f,&r,7);
    enqueue(arr,size,&f,&r,8);
    int x=deque(arr,size,&f,&r);   
    printf("Deleted Element is %d\n",x);
    for(int i = f; i <= r; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}