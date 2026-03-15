// program to check a number is palindrome or not.

#include<stdio.h>
int main(){
 
   int n,sum=0,t,call;
   printf("enter:");
   scanf("%d",&n);

   call = n;    // for later recall

   while(n>0){

   t=n%10;   // takes last digit
   sum=t+(sum*10); 
   n=n/10;}   // remove last digit

   if (call==sum) printf("palindrome");
   else printf("not ");

   return 0;
}
