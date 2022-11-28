#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;

void fibonacciSeries(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibonacci(i));
    }
}

int fibonacci(int n){
    if (n==0)
    {
        return 0;
    }else if(n==1 || n==2){
        return 1;
    }
    
    int a=fibonacci(n-1);
    int b=fibonacci(n-2);
    // printf("%d ",a);
    return a+b;   
}

int main()
{
    int n=5;
    fibonacciSeries(5);
    // printf("%d ",n);
    return 0;
}