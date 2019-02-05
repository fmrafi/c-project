#include<stdio.h>
int main()
{
    int a[50];
    int i,x,min=0;
    printf("enter different numbers:\n");
    scanf ("%d",&x);
    for(i=0;i>x;i++)
        if(min>a[i])
        min=a[i];
    printf("%d",min);
    return 0;
}


