#include <stdio.h>
int ispalin(int n);
int main()
{

    int a = ispalin(151);
    printf("%d", a);
}
int ispalin(int n)
{
    int r, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {

        return 1;
    }
    {
         return 0;
    }
}