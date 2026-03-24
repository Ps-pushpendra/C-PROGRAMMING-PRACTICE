// program to serach the element in array

#include<stdio.h>
int main(){
    
    int n,array[30],key,found=0;

    // no. of input
    printf("the no. of element: ");
    scanf("%d",&n);
    
    // taking elements
    for(int i=0;i<n;i++){
         printf("enter elements: ");
         scanf("%d",&array[i]);
    }

    // taking element for search
    printf("enter search element: ");
    scanf("%d",&key);

    // searching the element if it is in array
    for(int i=0;i<n;i++){
        if(key==array[i]) {
            printf("element found at index %d",i);
            found=1;
            break;    
        }
    }

    // if not
    if (found == 0){
        printf("element not in the array");
        printf("not found!!");
    }

    return 0;

}
