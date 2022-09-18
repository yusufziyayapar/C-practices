#include <string.h>
#include <stdio.h>


// tolowr(string1); = converts a string to lowercase
// toupper(string1); =  converts a string to uppercase 
// strcat(string1, string2); = appends string2 to end of string1
// strncat(string1, string2,1); = appends n characters to end of string1
// strcpy(string1, string2);  = copy string2 to string1
// strncpy(string1, string2,4); = copy n characters of string2 to string1

// strset(string1, '?'); sets all characters of a string to a given character.
// strrev(string1); reverses a string

// int result = strlen(string1); returns string length as int
// int result = strcmp(string1, string2); string compare all characters
//* if result == 0 strings are the same if result == -1 they are not equal.
// int result = strcmpi(string 1,string2); string compare all (ignore cases)

int main(){

char string1[25];
char string2[25];
printf("\nEnter string1: \n");
scanf("%s",&string1[20]);
printf("Enter string2: \n");
scanf("%s",&string2[20]);

int result = strcmp(string1, string2);

printf("\n%s",string1);
printf("\n%s",string2);

if(result == 0){
printf("\n%d they are equal\n",result);
} else if(result == -1){
    printf("\n%d they are not equal\n",result);
}
return 0;
}