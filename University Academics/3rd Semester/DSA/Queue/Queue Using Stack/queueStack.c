#include<stdio.h>
#include<conio.h>
#define n 5
int stack[n],stack1[n],count=0;
int TOP=-1,TOP1=-1;
void push(int);
void enqueue(int);
int dequeue();
int pop();

void push(int x){
    if (TOP==n-1)
    {
        printf("Queue is Full \n");
    }else{
        TOP++;
        stack[TOP]=x;
    }
}

void push1(int x){
    if (TOP1==n-1)
    {
        printf("Queue is Full \n");
    }else{
        TOP1++;
        stack1[TOP1]=x;
    }
}

int pop1(){
    if (TOP1==-1)
    {
        printf("Queue is Empty \n");
        return -1;
    }
    return stack1[TOP1--];
}


int pop(){
    if (TOP==-1)
    {
        printf("Queue is Empty \n");
        return -1;
    }
    return stack[TOP--];
}

void enqueue(int x){
    push(x);
    count++;
}

int deque(){
    // 
    /*
    -
    -
    4
    5
    3
    */
   if (TOP==-1 && TOP1==-1)
   {
    printf("Queue is Empty \n");
   }else{
   for(int i = 0; i < count; i++)
    {
        push1(pop());
    }
    count--;
    int b=pop1();
       for(int i = 0; i < count; i++)
    {
        push(pop1());
    }
    return b;
   }     
}
void displayQueue(){
    for (int i = 0; i <=TOP; i++)
    {
        printf("[Data]->%d \n",stack[i]);
    }
    
}
int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);
    displayQueue();
    printf("%d \n",deque());
    printf("%d \n",deque());
    printf("After Pop Operation \n");
    displayQueue();
    
    return 0;
}