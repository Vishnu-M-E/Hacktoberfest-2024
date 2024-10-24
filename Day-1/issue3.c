//A program to find the factorial of 10
//A program to find the factorial of 10

#include <stdio.h>

long factorial(int n) {

    long result = 1;

    while (n>1) {
        printf("Result: %ld, n:%d\n", result, n);
        result *= n;
        n = n-1;
    }

    return result;
}

int main() {
    
    printf("%ld\n", factorial(10));
}
