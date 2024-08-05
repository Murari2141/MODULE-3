#include <stdio.h>

 long long factorial(int n) {
  long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int numbers[5];
    unsigned long long fact;

    printf("Enter 5 numbers:\n");
    
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nFactorials:\n");
    
    for (int i = 0; i < 5; ++i) {
        fact = factorial(numbers[i]);
        printf("Factorial of %d = %llu\n", numbers[i], fact);
    }

    return 0;
}

