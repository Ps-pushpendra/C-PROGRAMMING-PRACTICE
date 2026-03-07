#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter number for factorial:");
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){  // condition also as = i<n+1
       fact = fact*i;         
    }
    printf("factorial of %d is : %d",n,fact);
    return 0;
}