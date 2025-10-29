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
    char name,number,menu_1,menu_2;
    float price_of_menu_1,price_of_menu_2;

    printf("Welcome to KFC Traditional Restrount");
    printChars("~",39);

    printf("Customer name:");
    gets(name);
    printf("Phone number:");
    gets(number);
    printf("Enter menu 1:");
    gets(menu_1);
    printf("Price:");
    gets(price_of_menu_1);
    printf("Enter menu 2:");
    gets(menu_2);
    printf("Price:");
    gets(price_of_menu_2);

    printChars("~",39);
    printf("\n");

    printf("Customer:");
    puts(name);
    printf("Phone number:");
    
    int j=0;
    

}   