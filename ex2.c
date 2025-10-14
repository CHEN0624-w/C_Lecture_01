#include <stdio.h>

int main()
{
   int start=0,end=10;

   printf("number\tsquare\tcube\n");

   for(int i=start;i<=end;i++)
   {
    printf("%d",i);
    printf("\t");
    printf("%d",i*i);
    printf("\t");
    printf("%d",i*i*i);
    printf("\n");
   }

    return 0;
}