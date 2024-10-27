
#include <stdio.h>

int main() {
    int result = 1;
    
    for (int i = 1; i <= 10; i++) {
        result *= i;
    }
    
    printf("%d\n", result);
    return 0;
}