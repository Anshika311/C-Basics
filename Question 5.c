#include<stdio.h>
int main()
{
    int x=369 , sum =0;
    sum= x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum= x+sum;

    printf("sum is %d", sum);

    return 0;
}
