//Print the first 10 terms of the fibonacci series

#include <stdio.h>

int main() 
{
    int i; 
    int numTerms = 10;
    int t1 = 0, t2 = 1;
    int nextTerm;
	
    printf("Fibonacci Series: ");

    for (i = 1; i <= numTerms; i++) 
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
	t2 = nextTerm;
    }

    return 0;
}
