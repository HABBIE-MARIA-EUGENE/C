#include <stdio.h>

int main()
{
    
    char str[50];
    
    printf("Enter the string: ");
    scanf("%s",str);
    for(int i=0;i<50;i++)
        if(str[i]=='\0')
           { 
                printf("The size of the string is %d",i);
                break;   
           } 
    return 0;
}
