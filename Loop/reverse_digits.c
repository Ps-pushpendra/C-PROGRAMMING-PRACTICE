// program to reverse the digits of a number.

// for example : 251 ---> 152.

#include<stdio.h>
int main(){
    
    int n,r,rev=0;
    printf("enter:");
    scanf("%d",&n);

    while(n!=0){  // for better understanding use dry run using copy&pen.
       r=n%10;
       rev= (rev*10)+r;
       n=n/10;
    }
    
   printf("%d",rev);

  return 0;
}
