
#include<stdio.h>
int main()
{
    int a,b,x;
    printf("enter the number ");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        for(b=x-a;b>=1;b--)
        printf(" ");
        for(b=a;b>=1;b--)
        printf(" *",b);
        printf("\n");
    }
    return 0;
}
