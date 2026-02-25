#include<stdio.h>
int main(){
char ch;
printf("enter any alphabet(upper or lower case):");
scanf("%c",&ch);
if (ch>='A'&& ch<='Z') printf("The character is in Uppercase");
else if (ch>='a' && ch<='z')printf("The character is in Lowercase");
else printf("invalid input!! enter alphabet");
return 0;
}
