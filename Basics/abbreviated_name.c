#include<stdio.h>
int main(){
    int f[15],m[15],l[15];
    printf("enter First,Middle,Last name: ");
    scanf("%s%s%s",f,m,l);

    printf("abbereviated name is %c.%c. %s",f[0],m[0],l);
    return 0;
}