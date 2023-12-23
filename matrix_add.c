#include<stdio.h>

void inp(int r,int c,int a[r][c])
    {
     for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                scanf("%d",&a[i][j]);
        }
    }
int add(int r,int c,int a[r][c],int b[r][c])
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
               { 
                   a[i][j]=a[i][j]+b[i][j];
               }
        }
    }
int res(int r, int c,int a[r][c])
    {
       for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                printf("%d ",a[i][j]);
            printf("\n");        
        } 
    }
int main()
{
    int r,c;
    printf("enter the size of the matrix\n");
    scanf("%d%*c%d",&r,&c);
    int a[r][c],b[r][c];
    printf("Enter the elements of matrix A\n");
    inp(r,c,a);
    printf("Enter the elements of matrix B\n");
    inp(r,c,b);
    add(r,c,a,b);
    printf("The sum of the elements of the matrix A and B are \n");
    res(r,c,a);
    
    return 0;
}
