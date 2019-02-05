#include<stdio.h>
int main()
{
    int a=5;
    int *x;
    x=&a;
    printf("\n address of a is %d",*x);
    printf("%d",x);
    return 0;
}
