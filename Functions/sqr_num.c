// program to determine the square of number using function.

#include<stdio.h>
#include<math.h>

int sqr();

int main(){
    int n;
    printf("enter number for it's square:");
    scanf("%d",&n);
    sqr(n);    // function call.
    return 0;
}

int sqr(int n){
   int  value;
   value = pow(n,2);
   printf("square of %d = %d",n,value);
}
