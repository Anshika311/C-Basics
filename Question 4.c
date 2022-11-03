#include<stdio.h>
int main()
{
    int x=32, y=45;

    x=x+y;
    y=x-y;
    x=x-y;

    printf("x = %d , y=  %d" ,x, y);

    return 0;
}
