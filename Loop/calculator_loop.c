// calculator that work until you exit.


#include<stdio.h>
#include<string.h>     // here i use this header file for comparision function of string at bottom.
                       // because the strings can't be compared directly.
int main(){
    char choice[10];
    float n1,n2,result;
    char operation;
    
 do{

printf("Enter two integers n1 and n2:");
scanf("%f%f",&n1,&n2);

printf("press + for ADDITION:\n");
printf("press - for SUBSTRACTION:\n");
printf("press * for MULTIPLEICATION:\n");
printf("press / for DIVISION:\n");
printf("your choice:");
scanf(" %c",&operation);

switch(operation) {
	
 // can also use numbers(1,2,3..) instesd of signs(+,-,*,/)
case '+':  result=n1+n2;      
	 printf("sum =%0.3f\n",result);
	 break;

case '-':  result=n1-n2;
	 printf("subtraction = %0.3f\n",result);
	 break;

case '*':  result=n1*n2;
	 printf("multiplication = %0.3f\n",result);
	 break;

case '/':  result=n1/n2;
    if (n2==0) printf("not divisible by zero!\n");
	else printf("division = %0.3f\n",result);
	break;

default: printf("invalid input!! please check the input");

 }

      printf("if want to continue then enter yes , if not then no:");
      scanf("%s",choice);

}while (strcmp(choice,"yes")==0 || strcmp(choice,"YES")==0);

printf("\n#calculator exited#");
// here this program runs without return 0; statement.
// because :"In C99 and later standards, reaching the end of main automatically returns 0.”
}
