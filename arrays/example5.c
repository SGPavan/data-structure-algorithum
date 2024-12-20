// Move all Zeros to the end of the array { 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1}

#include <stdio.h>

void main(){
    int arr[] = { 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1}, length, index=0;
    length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<length; i++){
        if(arr[i] != 0 ){
            arr[index] = arr[i];
            if(index < i){
                arr[i] = 0;
            }
            index++;
        }
    }

    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
}