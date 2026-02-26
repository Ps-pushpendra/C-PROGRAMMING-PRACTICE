// program to print number from 0 to 9 using for loop.

#include<stdio.h>
int main(){
    // loop starts with 0.
    for (int i=0;i<10;i=i+1){  // we can also use i++ instead of i=i+1.
        printf("%d\n",i);      // print the value of current i , then terminate to next line.
    }
    return 0;
}
