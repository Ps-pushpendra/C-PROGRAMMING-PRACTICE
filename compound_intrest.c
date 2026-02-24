#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,n,a,ci;                         // here n = no. of intrest counted per year.
printf("enter principal,rate,time,n:");
scanf("%f %f %f %f",&p,&r,&t,&n);
a=p*pow((1+r/(100*n)),n*t);                // total amount
ci=a-p;                                    // compound intrest
printf("total amount: %0.2f\n",a);
printf("compound intrest : %0.2f\n",ci);
return 0;
}

