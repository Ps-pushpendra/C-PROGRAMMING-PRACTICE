#include<stdio.h>
float area;

void circle(){
    float const pi = 3.14;
    float r;
    printf("enter radius of circle:");
    scanf("%f",&r);

    area = pi*(r*r);
    printf("area of circle: %.3f",area);
    printf("\n\n");
    
}

void square(){
    float side;
    printf("enter side of square:");
    scanf("%f",&side);
    area = side*side;
    printf("area of square: %.3f",area);
    printf("\n\n");
}

void rect(){
     float l,b;
    printf("enter length :");
    scanf("%f",&l);
    printf("enter breadth :");
    scanf("%f",&b);
    area = l*b;
    printf("area of rectangle: %.3f",area);
    printf("\n\n");
}

int main(){
    circle();
    square();
    rect();
    return 0;

}