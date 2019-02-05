#include<stdio.h>

int main ()
{
    int c[100],a,x,j,i=0;
        printf("Enter the value of decimal number: \n");
        scanf("%d",&a);

        for(;;)
            {
            x=a/2;
            c[i]=a%2;
            a=x;
            i++;
            if(a==0)
            break;
        }

        for(j=i-1; j>=0; j--)
        printf("%d",c[j]);
    return 0;
}
