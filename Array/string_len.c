#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    printf("enter your name: ");
    gets(name);

    printf("your name is %s",name);
    int len=strlen(name);
    printf("\n the length of the name is %d",len);

    return 0;
}