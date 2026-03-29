// program to check a number is strong or not.

// strong number --> the factorial of its digits and sum of them is equal to that number.(e.g. 145)

#include<stdio.h>
int main(){
    
    int n,sum=0,r,fact=1;

    printf("enter number:");
    scanf("%d",&n);
    
    int temp=n;   // storing in temperory variable to call it later

    while(temp!=0){
        
        r=temp%10;    // last digit
        
        for(int i=1;i<=r;i++){  //factorial of last digit
            fact=fact*i;
        }
        sum+=fact;     // adding the factorial if the digits
        temp/=10;      // removing the last digit
        fact=1;        // intitalizing the fact to 1 becoz. we have to find the factorial of other remaining digits
    }
    if (sum==n){
        printf("STRONG NUMBER");
    }
    else printf("NOT STORNG NUMBER");

    return 0;
}
