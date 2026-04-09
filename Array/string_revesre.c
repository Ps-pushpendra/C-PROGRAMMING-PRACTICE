// program to reverse the string.

#include<stdio.h>
int main(){
    char str[20],str2[20],i=0;
    int count=0;
    // input string
    printf("enter string:");
    gets(str);
    
    while(str[count]!='\0'){
        count++;
    }
    
    count = count-1;  // decreasing due to indexing.

    while(count>=0){
        str2[i] = str[count];
        i++;
        count--;
    }

    str2[i] = '\0'; // adding the null character at the end here i=len of string.
    printf("original string: %s \n",str);
    printf("reverse string: %s",str2);
    return 0;
}
