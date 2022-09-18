#include <stdio.h>
#include <string.h>

int main(){

char name[25];

printf("\nWhat's your name : ");
fgets(name, 25,stdin);
name[strlen(name)-1] = '\0'; // removes a new line after name
// when we press enter after typed our input;fgets creates a new line

while(strlen(name) == 0){
printf("\nYou did not enter your name !");
printf("\nWhat's your name : ");
fgets(name, 25,stdin);
name[strlen(name)-1] = '\0';
}

printf("\nHello %s\n",name);
    return 0;
}