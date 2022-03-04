// Q: Input an array of n elements and find the largest element in the array using pointer. Later print the largest element and its index.
#include <stdio.h>
int main()
{
    int n, i, large = 0, index = 0, smallest = 0, small_index = 0;
    printf("Enter the number of element in the array");
    scanf("%d", &n);
    int arr[n];
    int *ptr, *ptr1;

    ptr = arr;
    ptr1 = arr;
    printf("Enter the array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    large = *(ptr + 0);
    smallest = *(ptr + 0);
    for (i = 0; i < n; i++)
    {
        if (large < *(ptr + i))
        {
            large = *(ptr + i);
            index = i;
        }
        if (smallest > *(ptr + i))
        {
            smallest = *(ptr + i);
            small_index = i;
        }
    }
    printf("The array elements before intechanging is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    for (i = 0; i < n; i++)
    {
        if (index == i)
        {
            arr[index] = smallest;
            
        }
        if (small_index == i)
        {
            arr[small_index] = large;
        }
    }
    printf("\n");
    printf("The array elements after interchanging are : ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\nThe largest element in the array is %d and it`s index is %d\n", large, index);
    printf("The smallest element in the array is %d and it`s index is %d\n", smallest, small_index);
}