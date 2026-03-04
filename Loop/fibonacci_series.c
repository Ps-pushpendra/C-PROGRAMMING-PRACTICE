// program to print the fibonacci series  (0,1,0+1,1+1,....)

#include<stdio.h>
int main(){
    int n,a=0,b=1,i,c;

    printf("enter number for series:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d \n",a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}

