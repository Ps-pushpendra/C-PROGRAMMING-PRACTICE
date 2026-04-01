#include<stdio.h>
int main(){
    int arr[5][5],r,c;
   
    printf("enter no. of rows & column: ");
    scanf("%d%d",&r,&c);
     printf("enter 9 elements for matrix A:\n");
    printf("enter the elements:\n");

    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("the matrix A:\n");

     for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}