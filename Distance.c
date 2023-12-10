#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,c,d;
    float e,f;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    e=pow((b-a),2) + pow((d-c),2) ;
    f=sqrt(e);
    printf("%.2f",f);
        return 0;
}
