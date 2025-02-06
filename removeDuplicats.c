// 
#include<stdio.h>

int removeDuplicat(int arr[], int n){
    int res = 0;
     for(int i=1; i<=n; i++){
        if(arr[i]!=arr[res]){
            arr[res+1] = arr[i];
            res++;
        }
     }
     return res;
   
}

int main(){
    int arr[] = {1,1,1,2,2,3,3,3,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = removeDuplicat(arr,size);
    for(int i=0; i<res; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}