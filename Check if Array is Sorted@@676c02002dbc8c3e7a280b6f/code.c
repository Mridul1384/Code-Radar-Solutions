#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("Sorted");
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            break;
        }
        else if(i==n-2){
            printf("Sorted");
            break;
        }
    }
}