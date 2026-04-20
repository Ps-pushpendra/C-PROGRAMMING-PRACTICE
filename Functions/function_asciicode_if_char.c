#include<stdio.h>
char c;

int character(char c){
  printf("%d",c);
}

int main(){
    printf("enter any character:");
    scanf("%c",&c);
    character(c);
    return 0;
}