#include <stdio.h>
void change(int *i)
{
    *i = *i + 4;
    printf("The value of i is %d\n", *i);
}
int main()
{
    int i = 6,temp=i;
    change(&i);
    printf("The temp value in %d",temp);


}