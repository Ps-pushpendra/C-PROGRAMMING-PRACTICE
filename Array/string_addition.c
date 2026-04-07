#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("enter string: ");
    gets(str1);
     printf("enter string: ");
    gets(str2);

    strcat(str1,str2);
    printf("%s",str1);
    return 0;

}
