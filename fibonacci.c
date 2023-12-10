#include<stdio.h>
int main()
{
    int i[2]={1,2};
    int n,f,a;
    printf("Enter the value of n to print the fibonacci series ");
    scanf("%d",&a);
    printf("%d\n%d\n",i[0],i[1]);
    for (n=1;n<=a;n++)
    { 
       
            f=i[0]+i[1];
            i[0]=i[1];
            i[1]=f;
        printf("%d\n",f);
    }
    return 0; 
}
