// Declare and initialize an array of size 10. Increment the element of the array by 10 and store
// it in another array of same size. Finally display the elements of both the array (Original, Updated)

#include <stdio.h>
int main()
{
    int a[10];

    int b[10];
    printf("Enter the 10 element`s in the array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i] + 10;
    }
    printf("The Updated elements are in the array are : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
}