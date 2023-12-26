#include <stdio.h>

void inp(int n,char name[50])
    {
        for(int i=0;i<n;i++)
            scanf("%c",&name[i]);
    }
void opt(int n,char name[50])
    {
        for(int i=n;i>0;i--)
            printf("%c",name[i]);
    }

int main()
{
    
    char name[50];
    int i,n;
    
    printf("enter the size of the string:");
    scanf("%d%*c",&n);
    printf("enter the string ");
    inp(n,name);
    opt(n,name);

    return 0;
}
