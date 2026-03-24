#include<stdio.h>
int main(){
    int n,array[30],key,found=0;
    printf("the no. of element: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
    printf("enter elements: ");
    scanf("%d",&array[i]);}

    printf("enter search element: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(key==array[i]) {
            printf("element found at index %d",i);
            found=1;
            break;    
        }
    }
    if (found == 0){ printf("element not in the array");
        printf("not found!!");
    }

    return 0;

}