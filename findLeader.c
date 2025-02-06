#include<stdio.h>

void findLeader(int arr[], int n){
    int leader = arr[n-1];
    printf("%d",leader);    // Last element is always a leader
    for(int i=n-2; i>=0; i--){
        if(leader < arr[i]){
            leader = arr[i];
            printf(", %d",leader);
        }
    }
}

int main(){
    int arr[] = {16,17,14,15,13,16,4,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    findLeader(arr,n);
    return 0;
}