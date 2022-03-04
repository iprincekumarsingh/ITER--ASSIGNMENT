 /*
Write a program that takes the length and width of a rectangular yard and the length and width 
of a rectangular house situated in the yard. Your program should compute the time required 
to cut the grass at the rate of two square feet a second
*/

#include<stdio.h>
int main()
{
    int y_length,y_width,h_length,h_width,t_yard,t_house,t;

    printf("Enter the length of a YARD:\n");
    scanf("%d",&y_length);
    
    printf("Enter the length of a YARD:\n");
    scanf("%d",&y_width);

    printf("Enter the length of a YARD:\n");
    scanf("%d",&h_length);

    printf("Enter the length of a YARD:\n");
    scanf("%d",&h_width);

    t_yard = y_length * y_width;

    t_house = h_length * h_width;

    t=t_yard - t_house;

    printf("%d second",t/2);


}