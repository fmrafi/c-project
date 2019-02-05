#include<stdio.h>
int main()
{
    int unit,custum;
    float charges;
    printf("enter customer no. and unit consumed\n");
    scanf("%d %d",&custum,&unit);
    if(unit<=200)
        charges=0.5*unit;
    else if(unit<=400)
        charges=100+0.65*(unit-200);
        else if(unit<=600)
        charges=230+0.8*(unit-400);
    else
        charges=390+(unit-600);
    printf("\n\ncustomer no: %d: charges=%.2f\n",custum,charges);
    return 0;
}
