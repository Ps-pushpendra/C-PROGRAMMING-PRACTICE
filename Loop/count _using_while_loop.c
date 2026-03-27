// program to count number using while loop upto user's choice.

#include<stdio.h>
int main(){
  
    int n;
    printf("enter number where you want to end:");
    scanf("%d",&n);

    int i;
    while(i<=n){  // loop works as the condition met
        printf("%d \n",n);    // print the current value of n untill the condition match.
        i++; // increment
    }
return 0;    

}
