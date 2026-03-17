#include<stdio.h>
int main(){
    int lcm,a,b;
    printf("enter two number for LCM:");
    scanf("%d%d",&a,&b);

    for (int i=(a>b?a:b);;i++){
        if((i%a==0)&&(i%b==0)){
         lcm=i; break;
        }
    }
    printf("LCM of %d & %d = %d",a,b,lcm);

    return 0;

}