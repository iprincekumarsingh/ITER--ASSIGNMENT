/* 1. Write a program to declare three variables of integer, character and floating-point type. Assign 
values to the variables and print their values in the following format.
Value of integer variable x=5
Value of character variable y=A
Value of float variable z=2.500000
*/

#include <stdio.h>
int main()
{
    int x;
    char y;
    float z;

    printf("Enter a number for x : ");
    scanf("%d", &x);
    printf("Enter a character for y : ");
    scanf(" %c", &y);
    printf("Enter a decimal value for z : ");
    scanf("%f",&z);
    printf("Value of integer variable x = %d \n",x);
    printf("Value of character variable y = %c \n",y);
    printf("Value of float variable z = %f \n",z);

}