#include <stdio.h>
int isPrime(int n);
int main()
{
    int n;
    printf("Enter a given no");
    scanf("%d", &n);
    isPrime(n);
}

int isPrime(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}