#include<stdio.h>
int main()
{
    int a,b,c,max;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    
    max=a>b?((a>c)?a:c):b;
    
    printf("maximun number is %d",max);

    return 0;
    
}