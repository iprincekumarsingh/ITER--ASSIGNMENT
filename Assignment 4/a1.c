/*
Input the values for x and y. Store he absolute difference of x and y in y, where the 
absolute difference is (x-y) or (y-x), whichever is positive. Do not use the abs or fabs 
function in your solution.
*/
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    printf("Enter the value of y: \n");
    scanf("%d",&y);
     
     if (x>y)
     {
       printf("Value of x is : %d \n",x-y);
     }
     else
     {
         
         printf("Value of y is : %d \n",y-x);
     }
     
     
}