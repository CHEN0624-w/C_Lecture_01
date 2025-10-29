#include <stdio.h>

void printChars(char ch,int count)
{
    for(int i=0;i<count;i++)
    {
        printf("%c",ch);
    }
    printf("\n");
}

int main()
{
    printChars('=',40);
}