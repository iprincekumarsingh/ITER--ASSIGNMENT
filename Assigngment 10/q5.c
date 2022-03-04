// Declare and initialize an array with 20 elements count the no. of even elements and odd elements present in the array, also find their sum.
#include <stdio.h>
int main()
{
    int a[5];
    int even = 0;
    int odd = 0;

    printf("Hey buddy 👍\n");
    printf("Please enter the marks of 20 student in the CFCP class 🤭\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The total number of even count is = %d", even);
    printf("The total number of odd count is = %d", odd);
}