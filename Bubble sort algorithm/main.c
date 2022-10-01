#include <stdio.h> 

void sortlargesttosmallest(int a[],int size){

for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
        if( a[j] < a[j+1])
    {
     int temp = a[j];
     a[j] = a[j+1];
     a[j+1] =temp;
     }
    }
  }
}

void sortsmallesttolargest(int a[],int size){

for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
        if( a[j] > a[j+1])
    {
     int temp = a[j];
     a[j] = a[j+1];
     a[j+1] =temp;
     }
    }
  }
}

void printarray(int a[],int size){

    for (int i= 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


int main(){

    int a[] = {8,5,3,1,2,6,9};
    int size = sizeof(a)/sizeof(a[0]);

sortlargesttosmallest(a,size);
printarray(a,size);

printf("\n\n");

sortsmallesttolargest(a,size);
printarray(a,size);
    return 0;
}