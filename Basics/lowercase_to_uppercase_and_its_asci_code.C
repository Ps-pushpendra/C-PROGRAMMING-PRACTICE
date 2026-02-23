// program to convert lowercase character to uppercase also to determine its ASCI CODE.
 
#include<stdio.h>
int main(){
char ch;
printf("enter any small case alphabet:");
scanf("%c",&ch);
printf("the upper case of alphabet %c is: %c\n",ch,ch-32);
printf("the ASCI CODE of %c is %d \n ASCI CODE of %c is %d",ch,ch,ch-32,ch-32);
return 0;
}
