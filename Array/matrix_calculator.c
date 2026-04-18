// program to do basic arithmatic calculation on matrices by choice.
// <<<<< MATRIX  CALCULATOR >>>>>>

#include<stdio.h>
int main(){
    float a[3][3],b[3][3],c[3][3]; // here c matrix is only for multiplication concept
    char choice;

    // taking element of matrix A
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter element of matrix A: ");
            scanf("%f",&a[i][j]);
        }
    }
    printf("\n");

      // taking element of matrix B
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            printf("enter element of matrix B: ");
            scanf("%f",&b[i][j]);
        }

    }

    printf("\n");
    printf("||what operation you want on the matrix||");
    printf("\n");

    printf("enter + for addition: \n");
    printf("enter - for subtraction: \n");
    printf("enter * for multiplication: \n");
    printf("enter / for division: \n");

    printf("\n");
    printf("your choice: ");
    scanf(" %c",&choice);  // aware of space before format specifier
    printf("\n");

    switch(choice){

        case '+': printf("addition of matrix A & B:\n");
                  for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        printf(" %.2f ",a[i][j]+b[i][j]);
                    }
                    printf("\n");
                  }
                  break;

         case '-': printf("subtraction of matrix A & B:\n");
                  for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        printf(" %.2f ",a[i][j]-b[i][j]);
                    }
                    printf("\n");
                  }  
                   break;        

         case '/': printf("division of matrix A & B:\n");
                  for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){

                      if(b[i][j]!=0)  printf(" %.2f ",a[i][j]/b[i][j]);
                      else printf(" Undefined ");

                    }
                    printf("\n");
                  }   
                   break;
                  
         case '*': for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        c[i][j]=0;
                        for(int k=0;k<3;k++){
                            c[i][j]+=a[i][k]*b[k][j];
                        }
                    }
                   }

                   printf("\n");
                   printf("multiplication of matrix A & B:\n");
                   printf("\n"); 

                   for(int i=0;i<3;i++){
                      for(int j=0;j<3;j++){
                          printf(" %.2f ",c[i][j]);
                        }
                     printf("\n");
                    }
                    break;

        default : printf("invalid input!! \n please check it");  
     }  
      return 0;
    }


