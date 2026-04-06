// program to compare two string given by the user equal or not.

#include<stdio.h>
#include<string.h>
int main(){
    
    char str1[20],str2[20];
    
    //input of first string
    printf("enter string: ");
    gets(str1);
    
    //input of second string
    printf("enter string: ");
    gets(str2);
    
    // compare using string comparision function
    int str = strcmp(str1,str2);
    printf("%d",str);
    
    return 0;

}
