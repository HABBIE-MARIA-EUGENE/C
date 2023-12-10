#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    e=(b-a)^2 + (d-c)^2 ;
    f=sqrt(e);
    printf("%d",f);
        return 0;
}
