// CREATE A USER DEFINED FUNCTION THAT WILL TAKE ONE CHARACTER ARUEMENT AND WILL RETURN THE ASCII OF THAT ARGUMENT.

#include<stdio.h>
char c;  //global variable

int character(char c){
  printf("%d",c);
}

int main(){
    printf("enter any character:");
    scanf("%c",&c);
    character(c);
    return 0;
}
