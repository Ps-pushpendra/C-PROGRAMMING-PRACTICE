// program to count digits in entered number

#include<stdio.h>
int main(){
    int n,count=0;

    printf("enter number:");
    scanf("%d",&n);
    printf("digits in %d:",n);

    while(n>0){         // used while loop because number of iteration is not known.
    
        n=n/10;         // if we not assign n here then it will create infinite loop.
        count++;        // here count increases as opeeration work.
    }
    
    printf(" %d",count);  
    return 0;
    
    }
