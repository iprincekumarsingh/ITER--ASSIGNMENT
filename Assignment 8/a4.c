#include <stdio.h>
int isPrime(int n);
int isPalin(int n);
int main()
{
    for (int i = 0; i < 200; i++)
    {
        if (isPrime(i) && isPalin(i))
        {
            printf("%d ", i);
        }
    }
}

int isPrime(int n)
{
    int i, f = 1, m;
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    if (f == 1)
        return 1;
}

int isPalin(int n)
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