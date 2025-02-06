// Check in ascending order
#include<stdio.h>

int isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
    }
    return 1;   
}

int main(){
    int arr[10] = {1,12,23,32,45,76,11,90,45,86};

    (isSorted(arr,10))? printf("True") : printf("False");
    return 0;
}