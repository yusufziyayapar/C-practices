#include <stdio.h>
#include <string.h>

int main()
{
// <--USER INPUT(with fgets)-->
char name[25];
int age;
printf("\nWhat is your name : ");
fgets(name, 25,stdin); // Syntax --> fgets(char,length,file or stdin) if there is no file just use stdin. 
// stdin : standart input
name[strlen(name)-1] = '\0'; // removes a new line after name
// when we press enter after typed our input;fgets creates a new line
printf("\nHow old are you : ");
scanf("%d",&age);
printf("\nHello %s :D",name); 
printf("\nYou are %d years old\n",age);
return 0;
}
