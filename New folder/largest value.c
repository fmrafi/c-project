#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter three value\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("\nlargest value is");
    if(a>b)
    {
        if(a>c)
            printf("Z%f\n",a);
        else
            printf("%f\n",c);
    }
    else
    {
        if(c>b)
            printf("%f\n",c);
        else
            printf("%f\n",b);
    }
    return 0;
}
