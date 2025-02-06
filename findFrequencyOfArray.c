#include<stdio.h>

void findFrequencyOfArray(int arr[], int n){
    int count = 1;
    for(int i=1; i<n-1; i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            printf("Freguency of %d is %d\n",arr[i-1], count);
            count = 1;
        }
    }
}

int main(){
    int arr[] = {1,1,1,2,2,2,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    findFrequencyOfArray(arr, n);
    return 0;

}
