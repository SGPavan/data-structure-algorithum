// Check if an Array is Sorted {1, 2, 3, 4, 5}

#include <stdio.h>
#include <stdbool.h>

bool findIfArraySorted(int arr[], int length){
    bool isArraySorted = true;
    for(int i=0; i<length-1; i++){
        if(arr[i+1] < arr[i]){
            isArraySorted = false;
            break;
        }
    }
    return isArraySorted;
}

void main(){
    int arr[] = {1, 2, 3, 4, 5}, length;  
    length = sizeof(arr)/sizeof(arr[0]);
    bool isSorted = findIfArraySorted(arr, length);
    printf("Array is sorted: %s", isSorted ? "true": "false");
}