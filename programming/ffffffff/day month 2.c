#include<stdio.h>

int main()

{
    int day,Year,Month;

    scanf("%d", &day);

    Year=day/365;

    Month=(day%365)/30;

    day=(day%30);

printf("%d %d %d", Year, Month, day);
    return 0;
}
