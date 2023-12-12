#include <stdio.h>

int main()
{
    int i,j,b[3],m[3],p[3],t[3];
    
    for(i=0;i<3;i++)
    {
        
    
        
            printf("enter the biology mark of the student %d ",i);
            scanf("%d",&b[i]);
            printf("enter the math mark of student %d ",i);
            scanf("%d",&m[i]);
            printf("enter the physics mark of the student %d ",i);
            scanf("%d",&p[i]);
        
       
    }
for(i=0;i<3;i++)
    {
    t[i]=b[i]+m[i]+p[i];
    printf("Total mark of the student %d %d\n",i,t[i]);
    }
    
    if  (t[0]>=t[1]&&t[0]>=t[2])
    {   printf("First rank goes to student 0");
        
    }
    else if(t[1]>=t[0]&&t[1]>=t[2])
    {
        printf("First rank goes to student 1");
            
    }
    else
    {
        printf("First rank goes to student 2");
        
    }    
    
    return 0;
    }

