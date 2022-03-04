#include<stdio.h>
 
int fibn(int);
 
int main()
{
   int n, a = 0, i;
 
   scanf("%d",&n);
 
   printf("Fibonacci numbers are : \n");

   for ( i = 1 ; i <= n ; i++ )
   {
      printf("%d\n", fibn(a));
      a++; 
   }

   return 0;
}
 
int fibn(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fibn(n-1) + fibn(n-2) );
} 