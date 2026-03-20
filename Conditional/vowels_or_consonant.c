#include<stdio.h>
int main(){
    char ch;

    printf("enter any character:");
    scanf("%c",&ch);

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')) printf("vowels");

    else if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')) printf("VOWELS");

    else if ('a'<=ch && ch<='z') printf("consonant");

    else if ('A'<=ch && ch<='Z') printf("CONSONANT");

    else printf("invalid input!!");
    
    return 0;
}