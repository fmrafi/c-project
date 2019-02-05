#include<stdio.h>
int main ()
{
    int a[100];
    int i,n,number;
    printf("enter the number to digits:\n");
    scanf ("%d",&number);
    for (i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<number;i++)
        printf (" %d",a[i]);
    return 0;
}
