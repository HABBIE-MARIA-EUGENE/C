#include<stdio.h>

void inp(int r,int c,int a[r][c])
    {
     for(int i=0;i<r;i++)
        {
                scanf("%d",&a[i][c]);
        }
    }
void tot(int r,int c,int a[r][c])
    {   
        for(int i=0;i<r;i++)
            a[i][3]=a[i][0]+a[i][1]+a[i][2];    
    }
int avg(int r,int c,int a[r][c]) 
    {
        int d=0;
        for(int i=0;i<r;i++)
        {   
            d+=a[i][3];
        }
        return d/r;
    }
void opt(int av,int r,int c,int a[r][c])
    {
        printf("Roll number scored below avg\n");
        for (int i=0;i<r;i++)
        {
            if(a[i][3]<av)
            {    
                printf("%d ",i+1);
                continue;
            }    
        }
    }

int main()
{
    int r,c;
    printf("enter the total number of students\n");
    scanf("%d",&r);
    int a[r][4];
    printf("Enter the math marks of the students\n");
    inp(r,0,a);
     printf("Enter the biology marks of the students\n");
    inp(r,1,a);
     printf("Enter the physics marks of the students\n");
    inp(r,2,a);
    tot(r,3,a);
    int av=avg(r,3,a);
    opt(av,r,3,a);
    
    return 0;
}
