#include<stdio.h>
int main()
{
    int count,n;
    float x,y;
    printf("enter the value of x and n:\n");
    scanf("%f %d",&x,&n);
    y=1;
    count=1;
    while(count<=n)
    {
        y=y*x;
        count++;
        printf("\nx=%f; n=%d; x to power n=%f\n",x,n,y);
    }
    return 0;
}
