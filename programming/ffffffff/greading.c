#include<stdio.h>

int main()

{
    int x;
    scanf("%d",&x) ;


    if(x>=80)


       printf("A+",x);


   else if(x<80 && x>=75)

       printf("A",x);

       else if(x<75 && x>=70)

           printf("A-",x);

        return 0;
}

