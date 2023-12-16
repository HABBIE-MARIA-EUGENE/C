#include <stdio.h>
void elema(int x,int a[x])
    {
        for(int i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
        }
    }
void elemb(int y,int b[y])
    {
        for(int i=0;i<y;i++)
        {
            scanf("%d",&b[i]);
        }
    }
void uni(int x,int a[x],int y,int b[y])
    {  
        printf("\nAUB= {");
        for(int i=0;i<x;i++)
            printf("%d",a[i]);
        for(int i=0;i<y;i++)
            printf("%d",b[i]);
        printf("}\n");    
    }
void inter(int x,int a[x],int y,int b[y])
    {
        printf("A∩B= ");
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                {
                    if(a[i]==b[j])
                        { 
                          printf("%d",a[i]);
                          continue; 
                        }
                    else
                        {
                            printf("null");
                            break;
                        }
                }
    }
    
int main()
    
{
    int x,y;
    printf("enter the number of elements in set A\n");
    scanf("%d",&x);
    int i,a[i];
    printf("enter the elements of A\n");
    elema(x,a);
    printf("enter the number of elements in set B\n");
    scanf("%d",&y);
    int j,b[y];
    printf("enter the elements of B\n");
    elemb(y,b);
    printf("the elements of A are: ");
    for(int i=0;i<x;i++)
        printf("%d ",a[i]);
    printf("\nthe elements of B are: ");
    for(int i=0;i<y;i++)
        printf("%d ",b[i]);
    uni(x,a,y,b);
    inter(x,a,y,b);
    
    return 0;
}
