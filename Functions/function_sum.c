#include<stdio.h>
int sum();

int main(){
  sum();
  return 0;
}
int sum(){
  int a,b;
  printf("enter two numbers:");
  scanf("%d%d",&a,&b);
  printf("sum = %d",a+b);
}
  
