#include<stdio.h>

int main()


{
    int year1,month,day,day2,day3;


    printf("n\n\t\t enter the value of day");

    scanf("%d",&day);

    year1=day/365;



    day2=day%365;


     month=day2/30;

     day3=day2%30;


    printf("%d    %d  %d ",year1,month,day3);

    return 0;


}
