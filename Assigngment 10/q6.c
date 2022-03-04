#include <stdio.h>
int main()
{
    int size;
    int findno;
    printf("Enter the size of array \n");
    scanf("%d", &size);
    int a[size];

    printf("Enter the elements of array");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter an element to find it is present in array or not\n");
    scanf("%d", &findno);
    
    for (int i = 0; i < size; i++)
    {
        if (a[i] == findno)
        {
            printf("The element  id found at %d", i);
            return 0;
        }
    }
    printf("Element not found");
}