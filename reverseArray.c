// 
#include<stdio.h>

int reverse(int arr[], int n, int low, int high){
    if(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        reverse(arr, 5, low+1, high-1);
    }  
}

int main(){
    int arr[5] = {1,12,23,32,45};
    reverse(arr,5,0,4);

    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}