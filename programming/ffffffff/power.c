#include<stdio.h>

#include<math.h>

int main()


{
    float a,b,c,x,y;


    printf("enter the value of a,b,c,x");


    scanf("%f%f%f%f",&a,&b,&c,&x);

     y=(a*pow(x,2)+(b*x)+c);

     printf("%f",y);

    return 0;
}
