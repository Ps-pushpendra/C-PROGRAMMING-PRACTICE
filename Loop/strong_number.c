#include<stdio.h>
int main(){
    int n,sum=0,r,fact=1;

    printf("enter number:");
    scanf("%d",&n);
    int temp=n;

    while(temp!=0){
        r=temp%10;
        for(int i=1;i<=r;i++){
            fact=fact*i;
        }
        sum+=fact;
        temp/=10;
        fact=1;
    }
    if (sum==n){
        printf("STRONG NUMBER");
    }
    else printf("NOT STORNG NUMBER");

    return 0;
}