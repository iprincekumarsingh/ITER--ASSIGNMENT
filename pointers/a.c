#include<stdio.h>
int main()
{
    int x;
    int *p;
    x=3;
    p=&x;
    printf("The adress of x = %u \n",&x);
    printf("The adress of x  = %u \n",&p);
    printf("The adress of x = %d ",&x);
    printf("The adress of x = %d ",*p);

}