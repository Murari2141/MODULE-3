#include <stdio.h>

int main() {
    int num, i;
    long long int fib1 = 0, fib2 = 1, nextTerm;

    
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num);

    
    printf("Fibonacci Series up to %d terms:\n", num);
    printf("%lld, %lld, ", fib1, fib2);

    
    for (i = 3; i <= num; i++) {
        nextTerm = fib1 + fib2;
        printf("%lld, ", nextTerm);
        fib1 = fib2;
        fib2 = nextTerm;
    }

    printf("\n");

    return 0;
}

