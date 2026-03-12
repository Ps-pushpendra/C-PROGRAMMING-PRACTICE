// program to determine the triangle is Isosceles,Right angled,Scalene,Equilateral.

#include<stdio.h>
int main(){
    float a,b,c;       // a,b,c are the sides of triangle.                                         
    printf("enter all three sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
    if ((a==b)&&(b==c)) printf("the triangle is equilateral");
    else if ((a==b)||(b==c)||(a==c)) printf("the triangle is isoceles");
    else if (!(a==b)&&!(b==c))printf("the triangle is scalene");
    else printf("the triangle is Right Angled");
    return 0;
}