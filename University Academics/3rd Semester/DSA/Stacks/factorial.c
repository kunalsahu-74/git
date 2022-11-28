#include <stdio.h>
#include <conio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n = 5;
    printf("Factorial of %d is %d", n, fact(n));
    return 0;
}