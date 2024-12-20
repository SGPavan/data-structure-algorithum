// Find the Largest element in an array  [3, 2, 1, 5, 2]

# include <stdio.h>

void main(){
    int arr[] = {3, 2, 1, 5, 2};
    int max = arr[0], length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Largest element: %d", max);
}