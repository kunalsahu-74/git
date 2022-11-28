#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;

void print(int n){
    if (n==0)
    {
        return;
    }
    printf("%d",n);
    print(n-1);
    printf("%d",n);
    
}

int main()
{
    print(5);
    return 0;
}