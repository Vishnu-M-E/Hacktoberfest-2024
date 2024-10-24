#include <stdio.h>

// Define a function to delelte an element from the array passed as argument.
void del(int *arr, int element) {
    int i=0;
    while(i<5) {
        if (arr[i] == element) {
            int j;
            for (j = i; j < 5 - 1; j++)
            arr[j] = arr[j + 1];
        }
        i++;
    }
}


int main() {
    int arr[5] = {2, 3, 4, 5, 7};

    del(arr, 5);

    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}