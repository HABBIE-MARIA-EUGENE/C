#include<stdio.h>
int main()
{   
    int a,b,c;
    char op;
    printf("enter the values along with the operator ");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
        {
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;    
        case '/':
            c=a/b;
            break;
            default:
            printf("invalid input");
        }
        printf("%d",c);
    
     return 0;
}
