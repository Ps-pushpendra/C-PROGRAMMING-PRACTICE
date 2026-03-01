#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter first number(a):");
    scanf("%d",&a);
    printf("enter second number(b):");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("the values of variable after swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
    

}