//A program to find the factorial of 10
//A program to find the factorial of 10

#include <stdio.h>

long factorial(int n) {

    long result = 1;
    while (n!=0) {
        result *= n;
        n--;
    }

    return result;
}

int main() {
    printf("Result: %ld, n: 10\n", factorial(10));
}