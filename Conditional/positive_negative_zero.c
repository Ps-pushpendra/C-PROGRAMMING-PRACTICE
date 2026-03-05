// program to check a number is positive negative or zero.

#include<stdio.h>
int main(){
int n;

printf("enter a number:");
scanf("%d",&n);

if (n==0) printf("entered number is zero");
else if (n>0) printf("positive");
else printf("negative");
return 0;
}
