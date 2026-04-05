// program to find the length of string without length function.

#include<stdio.h>
int main(){
    char str[20];
    int count=0;
    
    printf("enter string:");
    gets(str); // here gets function can read string also with space 
    
    while(str[count]!='0'){
        count++;
    } 
    
    printf("length of string: %d",count);     
    return 0;
}
