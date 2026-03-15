

#include<stdio.h>
int main(){
 
   int n,sum=0,t,call;
   printf("enter:");
   scanf("%d",&n);

   call = n;

   while(n>0){

   t=n%10;
   sum=t+(sum*10);
   n=n/10;}

   if (call==sum) printf("palindrome");
   else printf("not ");

    
    return 0;
}