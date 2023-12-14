#include<stdio.h>
int main()
{   
    int a[100];
    int n,i,t=0,av;
    printf("Enter the total number of students\n");
    scanf("%d",&n);
    printf("Enter the marks score by the students\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
        {
            t=t+a[i];
        }
    printf("Total sum of the marks scored by the students : %d\n",t);
    av=t/n;
    printf("Total average mark : %d\n",av);
    printf("Marks scored below average\n");
    for(i=0;i<n;i++)
        {
            if (a[i]<=av)
                printf("%d\n",a[i]);
        }
    return 0;
}
