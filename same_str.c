#include <stdio.h>

void inp(int n,char str[50])
    {
        for(int i=0;i<n;i++)
            scanf("%c",&str[i]);
    }
void opt(int n,char stra[50],char strb[50])
    {   
        for(int i=0;i<n+1;i++)
            {
                if(stra[i]==strb[i])
                    {
                        printf("the strings are same");
                    }
                    else
                        {printf("the strings are not same");
                        break;}
            }    
    }

int main()
{
    
    char stra[50],strb[50];
    int i,n,m;
    
    printf("enter the size of the string : ");
    scanf("%d%*c",&n);
    printf("Enter the string A: ");
    inp(n,stra);
    printf("enter the string B: ");
    inp(n,strb);
    opt(n,stra,strb);

    return 0;
}
