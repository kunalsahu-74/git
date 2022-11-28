#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
typedef struct node node;
#define row 5
#define col 6
int main()
{
    int smat[row][col]={
        {0,0,0,0,9,0},
        {0,8,0,0,0,0},
        {4,0,0,2,0,0},
        {0,0,0,0,0,5},
        {0,0,2,0,0,0}
        };

    int size=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {   
            if (smat[i][j]!=0)
            {
                size++;
            }
            printf("%3d",smat[i][j]);
        }
        printf("\n");
    }
    printf("Size is %d \n",size);
    
    int k=1;
    int compactMatrix[size+1][3];
    compactMatrix[0][0]=row;
    compactMatrix[0][1]=col;
    compactMatrix[0][2]=size;
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (smat[i][j]!=0)
           {
            compactMatrix[k][0]=i;
            compactMatrix[k][1]=j;
            compactMatrix[k][2]=smat[i][j];
            k++;
           }
        }
    }
    printf("Displaying Sparse Matrix \n");
    for (int i = 0; i < size+1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d",compactMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}