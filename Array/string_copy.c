#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],str2[10];
    printf("enter string:");
    gets(str1);
    strcpy(str2,str1);
    printf("%s",str1);
    printf("\n%s",str2);
    return 0;
    
}