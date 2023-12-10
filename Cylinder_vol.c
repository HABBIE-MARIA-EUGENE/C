#include <stdio.h>
#include<math.h>

int main()
{
    
    float r,h,v;
    printf("enter the radius of the cylinder ");
    scanf("%f",&r);
    printf("enter the height of the cylinder ");
    scanf("%f",&h);
    v= M_PI*(r*r)*h;
    printf("Volume of the cylinder is %.2f",v);

    return 0;
}
