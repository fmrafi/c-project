
#include<stdio.h>
int main()
{
    int n,c[100],j,x,i=0;

    printf("enter the element\n ");

    scanf("%d",&n);

    while(n!=0)

    {


        c[i]=n%2;
        i=i+1;
        n=n/2;

    }
    for(j=i-1;j>=0;j--)

    {
        printf("%d",c[j]);

    }
    return 0;


}

