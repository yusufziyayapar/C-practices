#include <stdio.h>
#include <stdlib.h>

int main()
{
// <--CIRCUMFERENCE and AREO OF CIRCLE-->
const double PI = 3.14159; // Variables declared with const cannot be changed.
double radius,circumference,area;
printf("\nEnter radius of a circle: ");
scanf("%lf",&radius);
circumference = 2*PI*radius;
area = 2*PI*radius*radius;
printf("\nCircumference of circle: %lf\n",circumference); 
printf("\nArea of circle: %lf\n",area);
return 0;
}
