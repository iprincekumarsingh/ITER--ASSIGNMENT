/*
Write a program that predicts how many whole sections of a batch would need to be created 
given the number of students enrolled in the batch. Assume that each section accommodates 
30 students. Prompt the user to enter the number of students enrolled. Echo print the number 
of students enrolled and then display both the number of sections that will be required and the 
number of students that will be left over.
*/
#include<stdio.h>
int main()
    {
        int stu;

        printf("Enter total number of students : ");

        scanf("%d",&stu);

        printf("\n");

        printf("Total Students enrolled %d  = \n",stu);

        printf("Total Section reuired for %d is =  %d \n",stu,stu/30);
        
        printf("Student left over : %d",stu%30);

    
    
    }