// program to find the transpose of a matrix.

#include<stdio.h>
int main(){
    int arr[3][3],i,j;

    // creation(input)
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("enter the element:");
        scanf("%d",&arr[i][j]);
        }
     }
     // displaying the matrix
     printf("\n");
     printf("the matrix is :");
     printf("\n");

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf(" %d ",arr[i][j]);
        }
        printf("\n");
     }

    // displaying the transpose 
     printf("\n");
     printf("the TRANSPOSE of matrix :");
     printf("\n");

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf(" %d ",arr[j][i]);  // just interchange i & j form upper loop
        }
        printf("\n");
     }
    
     return 0;

    }
 
    
