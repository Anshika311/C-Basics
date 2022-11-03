#include<stdio.h>
int main()
{
    int x=15 ,y=23 , t;

    t=x;
    x=y;
    y=t;

    printf("x=%d , y=%d", x, y);

    return 0;
}
