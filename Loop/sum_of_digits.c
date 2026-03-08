// program to print the sum of digits of a number

#include<stdio.h>
int main(){
    int n,r,sum=0;

    printf("enter number:");
    scanf("%d",&n);

    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r;  // 0 + last digits
    }
    printf("sum of the digits: %d",sum);
    return 0;

}
