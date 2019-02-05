#include<stdio.h>
#define accuracy 0.0001
int main()
{
    int n,count;
    float x,term,sum;
    printf("enter value of x\n");
    scanf("%f",&x);
    n=term=sum=count=1;
    while(n<=100)
    {
        term=term*x/n;
        sum=sum+term;
        count=count+1;
        if(term<accuracy)
            n=999;
        else
            n=n+1;
        printf("terms=%d sum=%f\n",count,sum);
    }
    return 0;
}
