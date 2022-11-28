#include<stdio.h>

void push(int *size,int arr[],int *top,int element){
    // Overflow Condition
    if (*top==*size-1)
    {
        printf("Overflow Condition \n");
        return;
    }
    (*top)++;
    arr[(*top)]=element;
    // Alternative Approach for above lines:    arr[(*top)++]=element; 
    
}
int pop(int *size,int arr[],int *top){
    // Return the element which is going to be deleted...!
    if (*top==-1)
    {
        printf("Underflow Condition");
        return -1;
    }
    else{
        int y;
        y=arr[(*top)];
        *top=*top-1;
        return y;
        // Alternative Code for the above lines without using an extra variable 
        // return return arr[(*top--)]
    }
}
int main(){
    int arr[6]={1,5};
    int length=6,top=1;
    for (int i = 0; i < top+1; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\n");
    push(&length,arr,&top,4);
    push(&length,arr,&top,7);
    push(&length,arr,&top,8);
        for (int i = 0; i < (top+1); i++)
    {
        printf("%d ",arr[i]);
    }
    int element=pop(&length,arr,&top);
    printf("\n%d is deleted \n",element);
    for (int i = 0; i < (top+1); i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}