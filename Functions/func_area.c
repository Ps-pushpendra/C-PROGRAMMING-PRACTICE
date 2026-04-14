// program to find the area of circle ,rectangle,square using function with global declaration

#include<stdio.h>
float area;  // global declaration

void circle(){
    float const pi = 3.14;  // constant value (not be changed)
    float r;                // local variable
    printf("enter radius of circle:");
    scanf("%f",&r);

    area = pi*(r*r);
    printf("Area of Circle: %.3f",area);
    printf("\n\n");
    
}

void square(){
    float side;    // local variable
    printf("enter side of square:");
    scanf("%f",&side);
    
    area = side*side;
    printf("Area of Square: %.3f",area);
    printf("\n\n");
}

void rect(){
     float l,b;     // local variable
    printf("enter length :");
    scanf("%f",&l);
    printf("enter breadth :");
    scanf("%f",&b);
    
    area = l*b;
    printf("Area of Rectangle: %.3f",area);
    printf("\n\n");
}

int main(){
    circle();     // function calls
    square();
    rect();
    return 0;

}
