/*
 Enter a character and check whether it is a digit, a special character, capital letter or 
small letter.
*/
#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter a character\n");
    scanf("%c",&ch);

  if (ch>='a' &&  ch<='z')
  {
      printf("It is small letter");
  }
  else if (ch>='A' && ch<="Z")
  {
      printf("It is capital letter");
  }
  else if(ch>=48 && ch<=57)
  {
     printf("It is Digit");
  }
  else{
      printf("It is Special character");
  }
  
    
}