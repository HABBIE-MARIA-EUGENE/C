#include<stdio.h>
int main()
{
    
    int a,b,z;
    int i;
    printf("Enter the first number ");
    scanf("%d",&a);
    printf("Enter the Second number ");
    scanf("%d",&b);
    printf("Select the option \n1=add \n2=subtract\n3=multiply\n4=divide\n");
    scanf("%d",&i);
    
        if (i==1)
        {
        z=a+b;
        printf("%d",z);
        }    
        else if (i==2)
        {
        z=a-b;
        printf("%d",z);
        }
        else if (i==3)
        {
            z=a*b;
        printf("%d",z);
        }
        else if (i==4)
        {
        z=a/b;
        printf("%d",z);
        }
        else 
            printf("invalid input");
    
    return 0;
    
}
