#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void enqueCQ(int *q,int n,int *f,int *r,int x)
{
    if ((int)(*r+1)%n==(int)*f)
    {
     printf("Overflow Condition..!");
     return; 
    }
    else if (*r==-1)
    {
        (*f)++;
        (*r)++;
    }else{
        *r=(*r+1)%n;
    }
    q[*r]=x;
}

int deQueue(int *q,int n,int *f,int *r){
    int x;
    if (*f==-1)
    {
        printf("Underflow Condition..!");
        exit(1);
    }
    x=q[*f];
    if (*f==*r)
    {
        *f=-1;
        *r=-1;
    }else{
        *f=(*f+1)%n;
    }
    return x;
}

int main()
{
    int arr[size];
    int f=-1;
    int r=-1;
    enqueCQ(arr,size,&f,&r,5);
    enqueCQ(arr,size,&f,&r,56);
    enqueCQ(arr,size,&f,&r,83);    
    return 0;
}