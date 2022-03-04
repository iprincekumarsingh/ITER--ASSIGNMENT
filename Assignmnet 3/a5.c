/*
Write a program that estimates the temperature in a freezer (in °C) given the elapsed time 
(hours) since a power failure. Assume this temperature (T) is given by
𝑇 =
4𝑡
2
𝑡 + 2
− 20
where t is the time since the power failure. Your program should prompt the user to enter how 
long it has been since the start of the power failure in whole hours and minutes. Note that you 
will need to convert the elapsed time into hours. For example, if the user entered 2 30 (2 hours 
30 minutes), you would need to convert this to 2.5 hours.
*/
#include <stdio.h>
int main()
{

    int hour, min;
    float t;

    printf("The elapsed time (hours) since a power failure\n");

    printf("Enter the hour : \n");
    scanf("%d",&hour);

    printf("Enter the minute : ");
    scanf("%d",&min);

    t+=hour;
    t+=(float)min/60.0;
    float temp=((4*t*t)/(t+2))-20;

    printf("%.2f celsius\n ",temp);
    printf("%.2f hours",t);

}