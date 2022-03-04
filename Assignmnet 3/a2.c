/*
2.
a. Write a program to enter a character type variable in LOWER case and print its ascii 
value.
b. Modify the program in 2(a) to print the character in UPPER case
*/
#include<stdio.h>
    int main()
    {
        char lc,uc;

        printf("Enter a character in LOWER CASE:\n");
        scanf("%c",&lc);
        // uc=uc-32;
        // printf("%c",uc);
        printf("%d%c",lc,lc);
    }