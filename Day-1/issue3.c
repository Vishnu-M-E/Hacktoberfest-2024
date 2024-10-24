//A program to find the factorial of 10

#include <stdio.h>

long factorial(int n) {

    long result = 1;

    while (n>0) {
        printf("Result: %ld, n:%d\n", result, n);
        result *= n;
        n--; 
    }

    return result;
}

int main() {
    
    printf("%ld\n", factorial(10));
    return 0;
}
