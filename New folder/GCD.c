#include<stdio.h>
int main()
{
    int x=12,y=28,temp;
    while (x!=0)
    {
        temp=x;
        x=y%x;
        y=temp;

    }
    printf("GCD %d",y);
    return 0;
}
