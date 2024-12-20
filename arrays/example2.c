// Find Second Smallest and Second Largest Element in an array {1,2,4,7,7,5}

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int length){
    int max = INT_MIN, second_max = INT_MIN;
    for(int i=0; i<length; i++){
        if(arr[i] > max){
            if(max != second_max){
                second_max = max;
            }
            max = arr[i];
        }else if(arr[i] > second_max && arr[i] !=  max){
            second_max = arr[i];
        }
    }
    return second_max;
}

int findSecondSmallest(int arr[], int length){
    int min = INT_MAX, second_min = INT_MAX;
    for(int i=0; i<length; i++){
        if(arr[i]<min){
            second_min = min;
            min = arr[i];
        }else if(arr[i]<second_min && arr[i] != min){
            second_min = arr[i];
        }
    }
    return second_min;
}

void main(){
    int arr[] = {1,2,4,7,7,5};
    int SecondLargest, SecondSmallest, length = sizeof(arr)/sizeof(arr[0]);
    SecondSmallest = findSecondSmallest(arr, length);
    SecondLargest = findSecondLargest(arr, length);
    printf("Second Smallest Element: %d and Secord Largest Element: %d", SecondSmallest, SecondLargest);
}