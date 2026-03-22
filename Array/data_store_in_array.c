// program to store data in array.

#include<stdio.h>
int main(){
   int marks[6];  // initialization of array with size.

   for (int i=0;i<=5;i++){
    printf("enter integer data:");   // taking value to store it.
    scanf("%d",&marks[i]);
   }

   for(int i=0;i<=5;i++){
    printf("at index %d value stored = %d \n",i,marks[i]); // printing the value with index.
   }
   return 0;
}
