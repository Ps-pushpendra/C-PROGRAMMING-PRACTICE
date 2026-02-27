// program to calculate percentage of ct examination.

#include<stdio.h>
int main(){
    float prcnt,total_marks;
    int cnss,m2,cpl,cle,icc,chem;
    printf("enter marks obtained in CNSS:");  // 40 marks max
    scanf("%d",&cnss);
    printf("enter marks obtained in M2 :");   // 40 marks max
    scanf("%d",&m2);
    printf("enter marks obtained in CPL:");   // 40 marks max
    scanf("%d",&cpl);
    printf("enter marks obtained in CLE:");   // 20 marks max
    scanf("%d",&cle);
    printf("enter marks obtained in ICC:");   // 20 marks max
    scanf("%d",&icc);
    printf("enter marks obtained in CHEMISTRY:"); // 40 marks max
    scanf("%d",&chem);

    total_marks = (cnss+cle+m2+cpl+chem+icc);

    prcnt= (total_marks*100)/200;

    printf("your percentage = %0.2f",prcnt);

    return 0;
}