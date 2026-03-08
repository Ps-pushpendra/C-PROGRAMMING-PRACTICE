#include<stdio.h>
int main(){
    int n,r,call,arm=0;
    printf("enter number:");
    scanf("%d",&n);
    call=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if (arm==call) printf("armstrong");
    else printf("not armstrong");

    return 0;
}