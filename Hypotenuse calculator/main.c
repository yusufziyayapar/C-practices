#include <stdio.h>
#include <math.h>

int main(){

// <--HYPOTENUSE CALCULATOR-->
double a;
double b;
double c;
printf("\nEnter side a: ");
scanf("%lf",&a);
printf("\nEnter side b: ");
scanf("%lf",&b);
printf("\nHypotenuse : %lf\n",sqrt(pow(a,2.0)+pow(b,2.0)));


    return 0;
}