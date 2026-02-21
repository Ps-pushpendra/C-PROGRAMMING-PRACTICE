// program to determine a number is divisible by 2 or not  without conditional statement.

#include<stdio.h>
int main(){
int n;
printf("enter number:");
scanf("%d",&n);
printf("output: %d",n%2==0);  // 0 means not divisible and 1 means divisible by 2.
return 0;
}