#include<stdio.h>
void triangle(int x)
    {
        printf("\n");
        for(int i=1;i<=x;i++)
        {
         for(int j=x;j>=i;j--)
           {
            printf("%d",j);
           }
           printf("\n");
        }      
    }
void main()
{
   int x;
   printf("Enter the number of rows ");
   scanf("%d",&x);
    triangle(x);
}
