// program to determine division according to percentage.

#include<stdio.h>
int main(){
float per;
printf("enter percentage:");
scanf("%f",&per);
if ((per>100)||(per<0)) { printf("Error! : percentage should be in range of 0 t0 100");}
else if (per>=60){printf("passed with first division");}
else if (per>=50){printf("passed with second division");}
else if (per>=40){printf("passed with third division");}
else {printf("Failed");};
return 0;
}