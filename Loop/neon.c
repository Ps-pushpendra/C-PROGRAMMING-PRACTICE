 // program to check a number is neon or not.
 
 // A number is neon if the sum of digits of its square equals the number itself.


#include<stdio.h>
int main(){
    int n,sqr,sum=0,r;

    printf("enter number:");
    scanf("%d",&n);

    sqr = n*n;

    while(sqr>0){
        r=sqr%10;
        sum=sum+r;
        sqr=sqr/10;
    }

   if(sum==n) printf("number is NEON");
   else printf("number is not NEON");

   return 0;
}