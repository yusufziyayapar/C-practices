#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

// <--MATH FUNCTIONS--> 
double a = sqrt(9); printf("\na = %.lf",a);
double b = pow(2, 4); printf("\nb = %.lf",b);
int c = round(3.5); printf("\nc = %d",c); // "x.5>=" the number is rounded up.   
int d = round(3.4); printf("\nd = %d",d); // "x.5<=" the number is rounded down. 
int e = ceil(3.1);  printf("\ne = %d",e); // the number is  always rounded up.
int f = floor(3.9);  printf("\nf = %d",f); // the number is always rounded down.
double g = abs(-100); printf("\ng = %.lf",g); // the number is converted to positive
double h = log(3.0); printf("\nh = %lf",h);
double i = sin(45); printf("\ni = %lf",i); 
double j = cos(45); printf("\nj = %lf",j);
double k = tan(45); printf("\nk = %lf\n",k);



    return 0;
}
