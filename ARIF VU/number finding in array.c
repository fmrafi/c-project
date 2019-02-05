#include<stdio.h>

int main()
{
    int a[10],n,v,i=0,flag=0;
    printf("Enter the amount of array: \n");
    scanf("%d",&n);

        for(i=0; i<n; i++)
    scanf("%d",&a[i]);

    printf("Enter the value of finding number:\n");
    scanf("%d",&v);

        for(i=0; i<n; i++)
       {

        if(v==a[i])

        {

        flag=1;
        break;
        }

       }

    if (flag==1)
    printf("%d=v is valid number and position %d",v,i);
    else
    printf("%d=v is invalid number",v);

    return 0;
}
