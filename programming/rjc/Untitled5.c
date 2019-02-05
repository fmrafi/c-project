
#include<stdio.h>
int main()
{
    int n,c[100],j,x,y=-7;

    printf("enter the element:\n");

    scanf("%d",&n);

    for(j=0;j<=n-1;j++)

    {
        scanf("%d",&c[j]);

    }
    scanf("%d",&x);
    for(j=0;j<=n-1;j++)

    {
        if(x==c[j])
       y=j;


    }

if(y>-1)
printf("found position=%d",y);

else
printf("not found");

    return 0;



}


