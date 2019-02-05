#include <stdio.h>
#include <math.h>


float timeconstant(float R, float C);


float R;
float C;
float time_c;


int main(void)
{


    printf("State a Value For The Resistor?\n");
    scanf("%f",&R);
    printf("State a Value For The Capacitor?\n");
    scanf("%f",&C);
    time_c = timeconstant(R,C);
    printf("Time Constant is : %.2f \n" ,time_c);


    getchar();
    getchar();


}
float timeconstant(float R1, float C1)
{
    float t_constant;
    t_constant = R1*C1;
    return t_constant;
}
