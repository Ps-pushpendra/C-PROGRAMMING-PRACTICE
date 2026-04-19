#include<stdio.h>
int main(){

    float a[3][3],b[3][3],c[3][3];
    char choice, again;

    do{

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter element of matrix A[%d][%d]: ",i,j);
            scanf("%f",&a[i][j]);
        }
    }

    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter element of matrix B[%d][%d]: ",i,j);
            scanf("%f",&b[i][j]);
        }
    }

    printf("\n");
    printf("|| What operation you want on the matrix ||\n");

    printf("Enter + for addition\n");
    printf("Enter - for subtraction\n");
    printf("Enter * for multiplication\n");
    printf("Enter / for division\n");

    printf("\nYour choice: ");
    scanf(" %c",&choice);

    printf("\n");

    switch(choice){

        case '+':
            printf("Addition of matrix A & B:\n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    c[i][j]=a[i][j]+b[i][j];
                    printf(" %.2f ",c[i][j]);
                }
                printf("\n");
            }
            break;

        case '-':
            printf("Subtraction of matrix A & B:\n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    c[i][j]=a[i][j]-b[i][j];
                    printf(" %.2f ",c[i][j]);
                }
                printf("\n");
            }
            break;

        case '*':
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    c[i][j]=0;
                    for(int k=0;k<3;k++){
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }

            printf("Multiplication of matrix A & B:\n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf(" %.2f ",c[i][j]);
                }
                printf("\n");
            }
            break;

        case '/':
            printf("Division of matrix A & B:\n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(b[i][j]!=0)
                        printf(" %.2f ",a[i][j]/b[i][j]);
                    else
                        printf(" Undefined ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice or input! please check");
    }

    printf("\n want to continue \n if yess enter 'y' and if not enter 'n' : ");
    scanf(" %c",&again);

    }while(again=='y' || again=='Y');

    printf("\nCalculator closed.");

    return 0;
}
