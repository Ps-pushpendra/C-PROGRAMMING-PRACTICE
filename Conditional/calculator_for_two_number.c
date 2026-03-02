// program work as calculator for two numbers.

#include<stdio.h>
int main(){
float n1,n2,result;
char operation;
printf("Enter two integers n1 and n2:");
scanf("%f%f",&n1,&n2);
printf("press + for ADDITION:\n");
printf("press - for SUBSTRACTION:\n");
printf("press * for MULTIPLEICATION:\n");
printf("press / for DIVISION:\n");
printf("your choice:");
scanf(" %c",&operation);

switch(operation) {

case '+':  result=n1+n2;
	 printf("sum = %f",result);
	 break;

case '-':  result=n1-n2;
	 printf("subtraction = %f",result);
	 break;

case '*':  result=n1*n2;
	 printf("multiplication = %f",result);
	 break;

case '/':  result=n1/n2;
	 printf("division = %f",result);
	 break;
default: printf("invalid input!! please check the input");
}
return 0;
}


