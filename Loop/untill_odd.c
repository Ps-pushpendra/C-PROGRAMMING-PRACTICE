// program that's not stop until user enters odd number.

#include<stdio.h>
int main(){
    int n;
    do{
        printf("the execution doesnt stop untill you enter odd number:");
        scanf("%d",&n);
        
    }while(n%2==0);    // loop continue if even.and if odd entered then loop exited.
    
    printf("loop breaks !! you entered even number.");
    return 0;

}
