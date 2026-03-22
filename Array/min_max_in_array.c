// program to find the minimun & maximum value in the array.

#include<stdio.h>
int main(){
    int array[30],n,i;
    int min,max,min_idx,max_idx;

    printf("enter no. of element in array:");   
    scanf("%d",&n);
    printf("the number of element in array: %d \n",n);
    printf("\n");   // for space to better view

    for(i=0;i<n;i++){
        printf("enter elements:");   // taking elements.
        scanf("%d",&array[i]);
    }

    min = array[0];   // initialize first as min at index 0 for using it  on loop.
    max = array[0];    // similarly for max
    min_idx = 0;       //also for index
    max_idx = 0;


    for(i=0;i<n;i++){
        if(array[i]<min) {  // do dry run for better understanding.
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
