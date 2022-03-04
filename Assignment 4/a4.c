//  Input a number and print whether it is even or odd.
#include <stdio.h>
int main()
{
    int x, z;

    printf("Enter a number to check wheater it is ODD / EVEN number\n");
    scanf("%d", &x);
    // z = x % 2;

    switch (x%2)
    {
    case 0:
        printf("It is a even number");
        break;
    case 1:
        printf("It is a odd number");

    default:
        break;
    }
}
