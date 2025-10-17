#include <stdio.h>

//创建重复符号的函数
void printChars(char ch,int count)
{
    for(int i=0;i<count;i++)
    {
        printf("%c",ch);
    }
    printf("\n");
}

float x;
int y;

int main()
{
    printChars('=',37);
    printf("Calculate Area and Perimeter of Rectangle\n");
    printChars('=',37);

    printf("Please key in the Length(cm)\n");
    scanf("%f",&x);
    printf("\nPlease key in the Width(cm)\n");
    scanf("%d",&y);

    printf("\n\n");

    printChars('=',37);
    printf("Area of Rectangle\t:%.1f^2",x*y);
    printf("\nPerimeter of Rectangle\t:%.1fcm",(x+y)*2);
    printf("\n");
    printChars('=',37);

    return 0;

}