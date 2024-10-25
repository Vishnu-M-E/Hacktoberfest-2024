#include <stdio.h>

void del(int arr[], int size, int element) {
    int pos = -1;

    for (int i = 0; i < size; i++){
        if (arr[i] == element){
            pos = i;
            break;
        }
    }

    if (pos != -1){
        for (int i = pos; i <size - 1; i++){
            arr[i] = arr[i+1];
        }
        arr[size - 1] = 0;
    }else{
        printf("Element not found in the array.\n");
    }    
}


int main() {
    int arr[5] = {2, 3, 4, 5, 7};
    int size = 5;

    del(arr, size, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}