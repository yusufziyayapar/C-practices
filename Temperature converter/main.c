#include <stdio.h>
#include <ctype.h>

int main()
{
// <--Temperature conversion program-->
char unit;
double temp;
printf("\nIs the temperature in (F) or (C) : ");
scanf("%c",&unit);
unit = toupper(unit); // This converts the entered letter to uppercase.
// for example a -->A , b -->B.
if (unit == 'C'){
printf("\nThe temperature is currently in C\n");
printf("\nEnter the temperature: \n");
scanf("%lf",&temp);
temp = (temp * 9 / 5 )+ 32;
printf("\nThe temperature in (F) is %.1lf\n",temp);
} else if (unit == 'F'){
printf("\nThe temperature is currently in F\n");
printf("\nEnter the temperature: \n");
scanf("%lf",&temp);
temp = ((temp - 32) * 5) / 9;
printf("\nThe temperature in C is %.1lf\n",temp);
}else{
printf("\n%c is not a valid unit of measurement\n",unit);
} 


return 0;
}
