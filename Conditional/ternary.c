// ternary (conditional statement/operator)
     // condition? value_if_true : value_if_false ;

#include<stdio.h>
int main(){

    int age;
    printf("enter age:");
    scanf("%d",&age);

     (age>=18)? printf("eligble for vote") : printf("not eligble for vote");

     return 0;
}