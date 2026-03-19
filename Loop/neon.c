 // program to check a number is neon or not.
 
 // A number is neon if the sum of digits of its square equals the number itself. eg.9 is neon number
  

#include<stdio.h>
int main(){
    int n,sqr,sum=0,r;

    printf("enter number:");
    scanf("%d",&n);

    sqr = n*n;  // we can also use here math.h library for square.

    while(sqr>0){
     
        r=sqr%10;  // last digit of square
        sum=sum+r;
        sqr=sqr/10; // remove the last digit.
    }

   if(sum==n) printf("number is NEON");
   else printf("number is not NEON");

   return 0;
}
