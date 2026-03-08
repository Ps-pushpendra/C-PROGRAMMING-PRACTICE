// program to determine the entered number is armstrong number or not

// such as i entered number 153 then if "cube of 1 + cube of 5 + cube of 3"=153 then it is armstrong number.

#include<stdio.h>
int main(){
    int n,r,call,arm=0;
    printf("enter number:");
    scanf("%d",&n);
    call=n;
    while(n>0){
        r=n%10;    // give the last digit
        arm=(r*r*r)+arm;   // (1*1*1)+(5*5*5)+(3*3*3)
        n=n/10;    // remove the last digit.
    }
    if (arm==call) printf("armstrong");
    else printf("not armstrong");

    return 0;

}
