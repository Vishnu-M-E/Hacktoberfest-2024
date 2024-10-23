//A Program to print hourglass pattern using star *
#include <stdio.h>

int main() {
    int rows = 5;
    int lenght =1;
    
        for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * * 
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *  
*/
