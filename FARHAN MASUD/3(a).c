#include<stdio.h>
int main()
{
    int a[50];
    int i,x,max=0;
    printf("enter different numbers:\n");
    scanf ("%d",&x);
    for(i=0;i<x;i++)
        if(max<a[i])
        max=a[i];
    printf("%d",max);
    return 0;
}
