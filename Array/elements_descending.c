// program to arrange the numbers of array in dexcending order.

#include<stdio.h>
int main(){
    int a[20];
    int n,j,i,t=0;

    printf("enter no. of element:");
    scanf("%d",&n);

    printf("enter %d element for array:",n);
    printf("\n");

    for(i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("given elements: ");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\n");
    printf("arranged elements: ");
    for(i=0;i<n;i++){
        printf(" %d >",a[i]);
    }
    return 0;
}
