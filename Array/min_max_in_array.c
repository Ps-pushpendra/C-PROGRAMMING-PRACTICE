#include<stdio.h>
int main(){
    int array[30],n,i;
    int min,max,min_idx,max_idx;

    printf("enter no. of element in array:");
    scanf("%d",&n);
    printf("the number of element in array: %d \n",n);
    printf("\n");

    for(i=0;i<n;i++){
        printf("enter elements:");
        scanf("%d",&array[i]);
    }

    min = array[0];
    max = array[0];
    min_idx = 0;
    max_idx = 0;


    for(i=0;i<n;i++){
        if(array[i]<min) {
            min = array[i];
            min_idx = i;
        }

        if(array[i]>max) {
            max = array[i];
            max_idx = i;
       }
    }
       printf("\n");
       printf("the minimum in array = %d \n at index %d \n",min,min_idx);
       printf("\n");
       printf("the maximum in array = %d \n at index %d \n",max,max_idx);

       return 0;
}