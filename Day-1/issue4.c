#include <stdio.h>

void del(int *arr, int element) {
    // Define a function to delelte an element from the array passed as argument.
    for(int i=0;i<5;i++){
    if(arr[i]==element){
    for(int j=i;j<5;j++)
    arr[j]=arr[j+1]; 
}

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
