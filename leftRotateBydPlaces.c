#include<stdio.h>

int reverse(int arr[], int low, int high){
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
int leftRotate(int arr[], int d, int n){
    reverse(arr, 0, d-1);
    reverse(arr, d+1, n-1);
    reverse(arr, 0, n-1);
}

int main(){
    int arr[5] = { 1,2,3,4,5};
    leftRotate(arr, 3, 5);
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}