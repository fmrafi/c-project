#include<stdio.h>
int main ()
{
    int a,b,c;

        for(a=1;a<=4;a++)
        {
            for (b=1;b<=4-a;b++)
                {
                    printf(" ");
                }

            for(c=1;c<=a;c++)
            {
               printf("*");
            }

             printf("\n");
        }

        return 0;
}


