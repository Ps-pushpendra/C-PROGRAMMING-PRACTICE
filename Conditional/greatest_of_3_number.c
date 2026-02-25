//program to find the greatest of three number.

#include<stdio.h>
int main(){
int a,b,c;
printf("enter three differet numbers(a,b,c):");
scanf("%d%d%d",&a,&b,&c);         
if((a>b)&&(a>c)){printf("a=%d is greater",a);}                   // comparision of a with respect to b,c.
else if ((b>a)&&(b>c)){printf("b=%d is greater",b);}             // comparision of b with respect to a,c.
else {printf("c=%d is greater",c);};             
return 0;
}
