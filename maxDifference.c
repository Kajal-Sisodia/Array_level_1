#include<stdio.h>

int maxDiff(int arr[], int n){
    int res = arr[1]-arr[0];
    int min_element = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-min_element>res){
            res = arr[i]-min_element;
        }
        if(arr[i]<min_element){
            min_element = arr[i];
        }
    }
    return res;
}

int main(){
    int arr[6] = {2,6,10,12,4,1};
    printf("Max Difference is %d",maxDiff(arr,6));
    return 0;
}