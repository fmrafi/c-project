#include<stdio.h>
#include<math.h>

int main()

{
         int i,n,j;

         printf("\n\n\t\tenter the number");

         scanf("%d" , &n);

         for(i=1;i<=sqrt(n);i++)

                  j=n%i;

         if(j==0)
    printf("\n\n\t\tthe number is not prime:");


    else
                  printf("\n\n\t\tthe number is prime:");


         return 0;
}
