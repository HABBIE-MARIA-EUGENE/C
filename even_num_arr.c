#include<stdio.h>
#define N 5
int main()
{
    int a[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered %d input values are\n",N);
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<N;i++)
    {
        if (a[i]%2!=0)
        
            a[i]=a[i]+1;
    }
    printf("\nAfter adding 1 with all the odd number inputs\n");
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
