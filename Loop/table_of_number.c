//program to print the table of any number by for loop.

#include<stdio.h>
int main(){
    int n,i;
    printf("enter any number of which table you want:");
    scanf("%d",&n);

    for (i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;

}
