#include<stdio.h>

int secondLargest(int arr[], int n){
    int i,largest=0, secLargest=-1;

    for(i=1; i<10; i++){
        if(arr[i]>arr[largest]){
            secLargest = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(secLargest==-1 || arr[secLargest]<arr[i]){
                secLargest = i;
            }
        }
    }
    return secLargest;
}

int main(){
    int arr[10] = {1,12,23,32,45,76,11,90,45,86};
    int index = secondLargest(arr,10);
    if(index == -1){
        printf("Second largest did not exist ");
    }
    else{
        printf("Second Largest is %d",arr[index]);
    }
    
    return 0;
}