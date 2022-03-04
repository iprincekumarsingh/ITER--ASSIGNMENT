#include <stdio.h>
int main()
{
    
    int size, sum = 0, avg = 0;

    printf("Enter the size of array \n");
    scanf("%d", &size);
    int a[size];

    printf("Enter the 10 element`s in the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        avg += a[i];
    }
    printf("The sum is :%d \n", sum);
    printf("The average  is :%d ", avg / size);
}
