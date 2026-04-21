#include<stdio.h>

void gst(float prize);

int main(){
    float price;
    printf("enter the price of product:");
    scanf("%f",&price);
    gst(price);
    return 0;
}

void gst(float price){
   price += (price * 0.18) ;
   printf("final price after gst add on : %f",price);

}