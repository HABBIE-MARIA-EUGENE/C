#include<stdio.h>

void inp(int r,int a[r][r])
    {
     for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
                scanf("%d",&a[i][j]);
        }
    }
int opt(int r,int a[r][r])
    {
        for(int i=0;i<r;i++)
            printf("%d ",a[i][i]);
    }
    
int main()
{
    int r,c;
    printf("enter the size of the matrix\n");
    scanf("%d",&r);
    int a[r][r],b[r][c];
    printf("Enter the elements of matrix A\n");
    inp(r,a);
    printf("The diagonal elements of the matrix are\n");
    opt(r,a);
    
    return 0;
}
