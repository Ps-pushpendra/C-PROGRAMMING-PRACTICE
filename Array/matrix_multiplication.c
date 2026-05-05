// program to get the multiplication of two matrix 

#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],arr3[3][3],i,j,k;
    // taking the elements of matrix A
    printf("enter 9 matrics for matrix A:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("enter %d row & %d colomn:",i,j);
        scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // taking the elements of matrix B
    printf("enter 9 elements for matrix B:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("enter %d row & %d colomn:",i,j);
        scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    // displaying the matrix A
    printf("\nthe elements of matrix A:");
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          printf(" %d  ",arr1[i][j]);
        }
        printf("\n");
    }
    // displaying the matrix B
    printf("\nthe elements of matrix B:");
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          printf(" %d  ",arr2[i][j]);
        }
        printf("\n");
    }
     // iteration for the multiplication 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr3[i][j]=0;
            for(k=0;k<3;k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];

            }
        }
    }

    // printing the multiplicated matrix
    printf("\n");
    printf("multiplication of both matrix A & B:");
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         printf(" %d ",arr3[i][j]);
        }
     printf("\n");
    }

    return 0;
}
