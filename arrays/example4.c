// Remove Duplicates in-place from Sorted Array  {1,1,2,2,2,3,3}

#include <stdio.h>

void main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3}, length, index=0, count=0, tmp;
    length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<length-1; i++){
        if(arr[i+1]>arr[i]){
            arr[index+1] = arr[i+1];
            index = index+1;
        }
    }
     
    printf("K elements: %d", index+1);
}