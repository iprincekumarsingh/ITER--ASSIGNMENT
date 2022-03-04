/* Declare and initialize an array that can store marks of 20 students in the subject CFCP. Find
// and display the highest and lowest mark in CFCP */
#include <stdio.h>
int main()
{
    int size;

    printf("Enter the size of array");
    scanf("%d", &size);
    int a[size];
    int lowest = 0;
    int highest = 0;

    printf("Hey buddy 👍\n");
    printf("Please enter the marks of 20 student in the CFCP class 🤭\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // for loop for lowest and highest mark
    for (int i = 1; i < size; i++)
    {

        if (a[0] < a[i])
        {
            highest = a[i];
        }
    }
    printf("The highest mark in the class is = %d\n", highest);

    // for loop for lowest mark

    for (int i = 1; i < size; i++)
    {

            if (a[0] > a[i])
        {
            lowest = a[i];
        }
    }
    printf("The highest mark in the class is = %d\n", lowest);
}