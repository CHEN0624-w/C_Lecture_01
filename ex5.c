//数值交换

#include <stdio.h>

int main()
{
    int a,b,temp;

    printf("Enter two integers:");
    scanf("%d,%d",&a,&b);

    temp=a,a=b,b=temp;

    printf("new value:  a:'%d'  b:'%d'",a,b);

    return 0;
}