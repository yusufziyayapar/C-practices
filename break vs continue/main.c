#include <stdio.h>

int main(){

// continue = skips rest of code & forces the next iteration of the loop
// break = exits a loop/swtich

int number;

printf("\nProgram that prints only even numbers up to the number you enter\nWith the continue function\n");
printf("\n");
printf("Enter the number: ");
scanf("%d",&number);

for (int i = 0; i <=number; i++)
{
    if(i%2 != 0){
        continue;
    }
  printf("\n %d",i);
} printf("\n");
printf("\nProgram that printed only even numbers up to the number you entered\nWithout the continue function\n");
for (int i = 0; i <=number; i++)
{
    if(i%2 == 0){
      printf("\n %d",i);
    }
} 

    return 0;
}