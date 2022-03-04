#include <stdio.h>
int isPrime(int n);
int main()
{
    int n;

    printf("Enter a number to is Prime or not : \n");

    scanf("%d", &n);

    int a = isPrime(n);

    if (a == 1)
    {
        printf("It  a Prime no");
    }
    else
    {
        printf("It is not  a prime no");
    }
    // printf("%d", a);
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