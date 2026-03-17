// program to expalin the use of ternary statement.

#include<stdio.h>
int main(){

    int age;
    printf("enter age:");   // ternary (conditional statement/operator)
    scanf("%d",&age);       //syntax ---> condition? value_if_true : value_if_false ;

     (age>=18)? printf("eligble for vote") : printf("not eligble for vote");

     return 0;
}
