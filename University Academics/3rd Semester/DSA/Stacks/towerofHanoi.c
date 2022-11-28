#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;
void TOH(int n,char L,char M,char R){
    if (n==0)
    {
       return;
    }
    else{
        TOH(n-1,L,R,M);
        printf("%c->%c \n",L,R);
        TOH(n-1,M,L,R);
    }
}
int main()
{
    TOH(4,'L','M','R');
    return 0;
}