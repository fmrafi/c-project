#include<stdio.h>

int main()


{
    int hour,hour1,minute,minute1,second;

    printf("n\n\t\t enter the value of second");


    scanf("%d",&second);

    hour=second/3600;

    hour1=second%3600;

    minute= hour1/60;

    minute1=hour1%60;

    second=minute1%60;

    printf("%d  %d  %d   ",hour,minute,second);

    return 0;
}
