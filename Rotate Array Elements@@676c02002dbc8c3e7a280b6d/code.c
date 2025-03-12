#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d\n",&arr[i]);
    }
    int x,k=0;
    scanf("%d",&x);
    x %= n;
    int arr1[n];
    for(int i = n-x; i<n;i++){
        arr1[k] = arr[i];
        k++;
    }
    for(int i = 0 ;i<n-x;i++){
        arr1[k] = arr[i];
        k++;
    }
    for(int i = 0; i<n; i++){
        printf("%d\n",arr1[i]);
    }
}