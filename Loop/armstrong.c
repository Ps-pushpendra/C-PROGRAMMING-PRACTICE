// program to determine the entered number is armstrong number or not

// such as i entered number 153 then according to no.of digits i.e. 3 "cube of 1 + cube of 5 + cube of 3"=153 then it is armstrong number.
           // if i = 1645 then " 1 power 4 + 6 power 4 + 4 power 4 + 5 power 4 " = i then it is armstrong number.


#include<stdio.h>
#include<math.h>
int main(){
    int n,arm=0,r,i,len=0;
    printf("enter number:");
    scanf("%d",&n);
    int call = n;  // for calling later
 // loop for determining length   
while(n!=0){
    r=n%10;
    n=n/10;
    len++;
}    
printf("length = %d",len);
printf("\n");

 // Reset n before second loop
    n = call;
// constraints for armstrong number.
while(n!=0){
    r=n%10;
    arm = pow(r,len) + arm ;
    n=n/10;
}
// condition for armstrong number 
if (arm == call) printf("ARMSTRONG NUMBER");
else printf("NOT ARMSTRONG NUMBER");
    
    return 0;
}
