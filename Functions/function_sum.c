// program to find the sum using function 

#include<stdio.h>
int sum(); // function declaration

int main(){
  sum(); // function call
  return 0;
}
// function definitation/body
int sum(){ 
  int a,b;
  printf("enter two numbers:");
  scanf("%d%d",&a,&b);
  printf("sum = %d",a+b);
}
  
