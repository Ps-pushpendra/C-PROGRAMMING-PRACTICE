// program to print the sum of first n natural number.

#include<stdio.h>
int main(){
    int n,sum=0,i;
    printf("enter number:");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++){
        sum = sum+i ; // sum+=i
        
    }
   printf("sum of first %d natural number: %d \n",n,sum);
   return 0; 
}
