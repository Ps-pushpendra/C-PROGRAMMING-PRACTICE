#include<stdio.h>
int main(){
   int marks[6];

   for (int i=0;i<=5;i++){
    printf("enter integer data:");
    scanf("%d",&marks[i]);
   }

   for(int i=0;i<=5;i++){
    printf("at index %d value stored = %d \n",i,marks[i]);
   }
   return 0;
}