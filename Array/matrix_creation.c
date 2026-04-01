// program to create the matrics and display it.

#include<stdio.h>
int main(){
    
    int arr[5][5],r,c;
   
    printf("enter no. of rows & column: ");  // taking the rows and column of matrix
    scanf("%d%d",&r,&c);
    
    printf("for MATRIX A \n enter the elements:\n");
    
    // storing elements in array(matrics)
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){      
           scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\n");
    // printing the matirx
    printf("the matrix A:\n");

     for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
