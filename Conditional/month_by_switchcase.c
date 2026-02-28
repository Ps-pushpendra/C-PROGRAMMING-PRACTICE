// program to get month by entring its allignment number.

#include<stdio.h>
int main(){
    char month;
    printf("enter 1 for first month:\n");
    printf("enter 2 for second month:\n");
    printf("enter 3 for third:\n");
    printf("enter 4 for fourth:\n");
    printf("enter 5 for fifth:\n");
    printf("enter 6 for sixth:\n");
    printf("enter 7 for seveth:\n");
    printf("enter 8 for eighth:\n");
    printf("enter 9 for ninth:\n");
    printf("enter 10 for tenth:\n");
    printf("enter 11 for eleventh:\n");
    printf("enter 12 for last month:\n");
    printf("your choice:");
    scanf(" %d",&month);

    switch(month){
        case 1: printf("January");
                break;
        case 2: printf("Feburary");
                break;
        case 3: printf("March");
                break;                
        case 4: printf("April");
                break;
        case 5: printf("May");
                break;        
        case 6: printf("June");
                break;   
        case 7: printf("July");
                break;
        case 8: printf("August");
                break;
        case 9: printf("September");
                break;
        case 10: printf("October");
                break;        
        case 11: printf("November");
                break;  
        case 12: printf("December");
                break;
        default: printf("invalid input!!");                     
    }
   return 0;
}