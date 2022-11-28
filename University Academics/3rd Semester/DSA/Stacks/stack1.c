#include<stdio.h>
// Implementing Multiple Stack in
//  a single Array
void push(int *stack,int n, int m,int top,int i,int x){
    if (top==(i+1*(n/m)-1))
    {
        printf("Overflow.\n");
        return;
    }
    else{
        top++;
        stack[top]=x;
    }
}

int pop(int *stack,int n,int m,int top,int i){
    if (top==i*(n/m)-1)
    {
        printf("Underflow.");
        return;

    }
    else{
        int x;
        x=stack[top];
        top--;
        return x;
    }   
}

int main(){
    // x->element
    // S->Stack
    // N->No. of elements
    // M->Size/No. of elements in the stack
    // Topi= Value of Top
    // i->value of i/ Current Stack No.
    int *arr={3,4,5,6,7,8,9,10,11};


    return 0;
}

