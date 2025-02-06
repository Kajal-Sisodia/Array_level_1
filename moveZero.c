#include<stdio.h>

void moveZero(int arr[], int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count ++;
        }
    }
    
}

int main(){
    int arr[5] = { 1,0,3,0,2};
    moveZero(arr, 5);
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}