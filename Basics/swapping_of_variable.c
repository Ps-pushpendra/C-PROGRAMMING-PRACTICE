// program to swap the value of two variable.

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter first number(a):");
    scanf("%d",&a);
    printf("enter second number(b):");
    scanf("%d",&b);

    temp=a;    // temp stores the value of a
    a=b;        // storing value of b on a 
    b=temp;     // providing value of temp to b

    printf("the values of variable after swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
    


}
