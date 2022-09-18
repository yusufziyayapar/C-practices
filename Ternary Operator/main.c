#include <stdio.h>

int findMaxValue(int x,int y){
return (x > y) ? x : y;
}

int main(){

// 6)<--TERNARY OPERATOR-->
// Syntax : (condition) ? value if true : value if false 

 int x,y;
printf("\nEnter two values: ");
scanf("%d %d",&x,&y);
 printf("The bigger number: %d\n",findMaxValue(x,y));

    return 0;
}