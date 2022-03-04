#include <stdio.h>
void fun1();
void fun2();
int main()
{
int a=1000;
printf("a=%d\n",a);
    fun1();
}
void fun1()
{
    int a = 100;
    printf("a=%d\n", a);
fun2();
}
void fun2()
{
    int a = 10;
    printf("a=%d\n", a);
}
