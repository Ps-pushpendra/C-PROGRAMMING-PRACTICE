// program to get LCM of two number

#include<stdio.h>
int main(){
    int lcm,a,b;
    printf("enter two number for LCM:");
    scanf("%d%d",&a,&b);

    for (int i=(a>b?a:b);;i++){  // ternary operator used. n
        if((i%a==0)&&(i%b==0)){  // if satisfy both the condition then loop terminates and exited.
         lcm=i; break;
        }
    }
    printf("LCM of %d & %d = %d",a,b,lcm);

    return 0;

}
