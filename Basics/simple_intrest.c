#include<stdio.h>
int main(){
float p,r,t,si;
  
printf("enter principal, rate,time:");
scanf("%f%f%f",&p,&r,&t);
  
si=(p*r*t)/100; // si formula
printf("simple intrest:%f",si);
  
return 0;
}
