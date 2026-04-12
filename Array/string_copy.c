// program to copy the string to another variable.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[10],str2[10];// creates two array one for storing string and one for copy it
    printf("enter string:");
    gets(str1); // use the full string also with space
    
    strcpy(str2,str1);
    printf("%s",str1);
    printf("\n%s",str2);
    
    return 0;
    
}
