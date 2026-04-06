#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("enter string: ");
    gets(str1);
    printf("enter string: ");
    gets(str2);

    int str = strcmp(str1,str2);
    printf("%d",str);
    return 0;

}