// . Declare and initialize an array A of size 10. Copy the content of array A to another array B
// in reverse order. Finally print both the arrays

#include <stdio.h>
int main()
{
    int a[10];
    int b[10];
    int size;
    
    scanf("%d", &size);
    printf("Enter the 10 element`s in the array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    printf("The First Array was without being reversed is : ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    printf("The First Array was with being reversed is : ");

    for (int i = 10 - 1; i >= 0; i--)
    {
        printf("%d ", b[i]);
    }
}