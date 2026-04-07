// program to add two strings using string function.

#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    //input string 1
    printf("enter string: ");
    gets(str1);
    //input string 2
     printf("enter string: ");
    gets(str2);
    //it is the function to add two string
    strcat(str1,str2);  // string2 automatically addd to string one also stored in it
    printf("%s",str1);
    return 0;

}
