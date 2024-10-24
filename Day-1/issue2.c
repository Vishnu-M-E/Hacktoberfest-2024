//A Program to print hourglass pattern using star *

#include <stdio.h>
int main()
{
    int rows = 5;

    for (int i = 0; i < 2 * rows - 1; i++) {

        int comp;
        if (i < rows) {
            comp = 2 * (rows - i) - 1;
        }
        else {
            comp = 2 * (i - rows + 2) - 1;
        }

        
        int spaces = (i < rows) ? i : (2 * rows - i - 2);
        for (int k = 0; k < spaces; k++) {
            printf(" ");
        }
        
        for (int j = 0; j < comp; j++) {
            printf("*");
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
