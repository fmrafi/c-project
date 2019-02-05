#include<stdio.h>
int main()
{
    int a[5],i;
    int max=0;
    for( i=0; i<5;i++)
    {
           if(max<a[i])
        max=a[i];
    printf("%d",max);
    return 0;
    }

}
