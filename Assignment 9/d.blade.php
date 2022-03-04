#include <stdio.h>
    int fibn(int);
    int main()
    {
        fibn(7);
    }
    int fibn(int n){
        int a= 0, b= 1, i;
    
        if (n < 1)
            return 0 ;
        printf("%d ", a);
        for (i = 1; i < n; i++)
        {
            printf("%d ", b);
            int next = a + b;
            a = b;
            b = next;
        }
    }