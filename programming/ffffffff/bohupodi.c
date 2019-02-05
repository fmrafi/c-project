#include<stdio.h>

#include<math.h>

int main()

{
         float a,b,c,y,m;


         printf("\n\n\nenter the value of a,b,c");


         scanf("%f %f %f", &a,&b,&c);


         m=sqrt((b*b)-(4*a*c));


         printf("the result is %f", m);


         return 0;
}
