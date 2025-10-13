#include <stdio.h>

int main()
{
    //State that a program will calculate the product of three integers
    printf("This program calculates the product of three integers\n\n");

    //define the variables x,y,z and result to be of type int 
    int x,y,z;
    int result;

    //promot the user to enter three integers,then read three integers from the keyboard and store them in the variabals x,y,z
    printf("Enter the first integer:");
    scanf("%d",&x);

    printf("Enter the second integer:");
    scanf("%d",&y);

    printf("Enter the third integer:");
    scanf("%d",&z);

    //comput the product of the integers in the variables x,y and z,znd use that product to initialiaze the variable result
    result=x*y*z;

    //print "The product is"followed by the value of the integer variable result
    printf("The product is %d\n",result);



}