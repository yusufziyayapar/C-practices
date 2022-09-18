#include <stdio.h>
#include <string.h>

void greeting(char[],int);

int main(){

char name[15];
int age;

printf("\nWhat is your name?\n");
fgets(name,15,stdin);
name[strlen(name)-1] = '\0';
printf("How old are you\n");
scanf("%d",&age);

greeting(name,age);
    return 0;
}

void greeting(char name[],int age){
printf("\nHello %s",name);
printf("\nYou are %d years old\n",age);

}