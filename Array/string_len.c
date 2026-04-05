// program to determine the length of the string

#include<stdio.h>
#include<string.h>

int main(){
    
    char name[20];
    
    printf("enter your name: ");    // input string
    gets(name);     // here gets function can read string also with space 

    printf("your name is %s",name);
    
    int len = strlen(name);   // using inbuilt function for determining the length and storing it in len variable
    printf("\n the length of the name is %d",len);

    return 0;
}
