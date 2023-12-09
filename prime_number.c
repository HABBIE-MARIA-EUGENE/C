#include<stdio.h>
int main()
{
    int a,i,count=0;
    
    printf("Enter the number ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
      {
        if (a%i==0)
            count++;
      }
            if (count==0) 
      
                printf("The given number is a prime number\n");
        else 
            printf("The given number is not a prime number\n");
      
    return 0;
}
