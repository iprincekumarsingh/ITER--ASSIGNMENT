#include <stdio.h>
int rec(int);
int main()
{
    int n;
    printf("Enter a  number :\n");
    scanf("%d",&n);
    printf("The factorial of a given number %d is  : %d ",n,rec(n));
}
int rec(int n)
{
    if (n==0)
        return 1;
    return n*rec(n-1);
    
}