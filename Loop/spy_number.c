#include<stdio.h>
int main(){

    int  num,sum=0,pro=1,lst;

    printf("enter a number:");
    scanf("%d",&num);

    while(num>0){
        lst=num%10;
        sum+=lst;
        pro*=lst;
        num=num/10;
    }

     if (sum==pro) printf("SPY");
     else printf("number is not SPY");

     return 0;
}