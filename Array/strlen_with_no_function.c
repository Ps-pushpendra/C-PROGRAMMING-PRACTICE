#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int count=0;
    printf("enter string:");
    gets(str);
    while(str[count]!='0'){
        count++;
    }
    printf("length of string: %d",count);     
    return 0;
}
