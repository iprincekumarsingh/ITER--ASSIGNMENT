/*
Input three integers and print the largest among them using if—else structure.
*/

#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Input the value of x: ");
    scanf("%d", &x);
    printf("Input the value of y: ");
    scanf("%d", &y);
    printf("Input the value of z: ");
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("X is greater");
    }
    else if (y > z)
    {
        printf("Y is greater");
    }
    else
    {
        printf("Z is greater");
    }
}