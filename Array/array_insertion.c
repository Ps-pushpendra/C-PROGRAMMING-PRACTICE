#include<stdio.h>
int main(){
    int arr[5]= {10,20,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    int value = 30;
    int pos = 3;

    for(int i = n-1;i>=pos-1;i--){
           arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    n++;

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}