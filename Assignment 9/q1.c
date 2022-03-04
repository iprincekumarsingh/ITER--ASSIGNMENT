#include <stdio.h>
int main()
{
    int a, b, c;
    printf("CALCULATOR\n\n");
    printf("-------------");
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    printf("--------------");
    printf("Choose the number as your desire\n");
    printf("1 = +\n");
    printf("2 = -\n");
    printf("3 = *\n");
    printf("4 = /\n");
    printf("5 = %%\n");
    printf("--------------");
    printf("Fill the correct option");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        add(a, b);
        break;
    case 2:
        sub(a, b);
        break;
    case 3:
        mul(a, b);
        break;
    case 4:
        div(a, b);
        break;
    case 5:
        mod(a, b);
        break;
    default:
        break;
    }
}
int add(int a, int b)
{
    printf("The addition of two number %d + %d = %d", a, b, a + b);
}
int sub(int a, int b)
{
    printf("The Subtraction of two number %d - %d = %d", a, b, a - b);
}
int mul(int a, int b)
{
    printf("The Multiplication of two number %d + %d = %d", a, b, a * b);
}
int div(int a, int b)
{
    if (a == 0 || b == 0)
    {
        printf("Division is not possibile by 0");
    }
    else
    {
        printf("The Division of two number %d + %d = %d", a, b, a / b);
    }
}
int mod(int a, int b)
{
    printf("The Modulo Division of two number %d %% %d = %d", a, b, a & b);
}
