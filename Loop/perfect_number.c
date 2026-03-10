#include<stdio.h>
int main(){
    int n,sum=0;

    printf("enter number:");
    scanf("%d",&n);

    for (int i=1;i<n;i++){
        if (n%i==0) sum+=i;
    }
    if (sum==n) printf("number is perfect");
    else printf("not a perfect number");

    return 0;
}