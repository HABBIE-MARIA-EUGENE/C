#include <stdio.h>

void inp(int n,char str[50])
    {
        for(int i=0;i<n;i++)
            scanf("%c",&str[i]);
    }
void opt(int n,int m,char stra[50],char strb[50],char strc[100])
    {   
        printf("The string after concatenation: ");
        strc[100]=stra[50]+strb[50];
        for(int i=0;i<n+m;i++)
            printf("%c",strc[i]);          
    }

int main()
{
    
    char stra[50],strb[50],strc[100];
    int i,n,m;
    
    printf("enter the size of the string A: ");
    scanf("%d%*c",&n);
    printf("Enter the string A: ");
    inp(n,stra);
    printf("enter the size of the string B: ");
    scanf("%d%*c",&m);
    printf("enter the string B: ");
    inp(m,strb);
    opt(m,n,stra,strb,strc);

    return 0;
}
