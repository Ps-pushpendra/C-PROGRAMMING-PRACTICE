// program to check a number is positive negative or zero.

#include<stdio.h>
int main(){
int n;

printf("enter a number:");
scanf("%d",&n);

if (n==0) printf("entered number is zero");  
else if (n>0) printf("positive");   //number greater than zero
else printf("negative");            // number smaller than zero
return 0;
}
