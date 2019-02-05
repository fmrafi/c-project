#include<stdio.h>
int main()
{
    int x;
    printf("enter the age %d:\n");
    scanf("%d",&x);
    {
        if(1<x && x<=12)
        {
            printf("child");
        }
        else if(13<x && x<=19)
        {
            printf("adult");
        }
        else if(20<x && x<=30)
        {
            printf("old");
        }
    }
    return 0;
}
