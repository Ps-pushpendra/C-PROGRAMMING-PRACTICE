#include<stdio.h>
int main(){
    int n,count=0;

    printf("enter number:");
    scanf("%d",&n);
    printf("digits in %d:",n);

    while(n>0){
    
        n=n/10;         // if we not assign n here then it will create infinite loop.
        count++;
    }
    printf(" %d",count);
    return 0;
    }