#include <stdio.h>
#include<math.h>

void elem(int r, int c, int m[r][c])
    {
       printf("Enter the element of the matrix\n");
       for(int i=0;i<r;i++)
           { for(int j=0;j<c;j++)
                scanf("%d",&m[i][j]);
           }
    }
void opt(int r,int c,int m[r][c])
    {
        printf("the elements of the matrix are :\n");
        for(int i=0;i<r;i++)
           { 
               for(int j=0;j<c;j++)
                    printf("%d ",m[i][j]);
                    printf("\n");
           }
    }
void res(int r, int c, int m[r][c])
    {

        for(int i=0;i<r;i++)
           { 
               for(int j=0;j<c;j++)
                {   
                    m[i][j]=pow((m[i][j]),2);
                }
           } 
    }
int main()
{
    printf("enter the number of rows and columns of the matrix\n");
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int m[r][c];
    elem(r,c,m);
    opt(r,c,m);
    res(r,c,m);
    printf("After squaring ");
    opt(r,c,m);

    return 0;
}
