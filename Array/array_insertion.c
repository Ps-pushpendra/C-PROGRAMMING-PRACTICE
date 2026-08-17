// program to insert an element in array.
#include <stdio.h>

int main() {
   
   int a[500] ,n,i,j,e,p;

    printf("enter number of element:");
    scanf("%d",&n);

   printf("enter element to insert:");
   scanf("%d",&e); 
    
    printf("enter position to insert:");
    scanf("%d",&p);

    printf("enter element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");

    printf("old array: ");

      for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }


      printf("\n");

      for(i=n-1;i>=p-1;i--){
        a[i+1] = a[i];
    }
    
    a[p-1] = e;

    
    printf("inserted array: ");

      for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}
