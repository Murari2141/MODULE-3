// 23.WAP to calculate swap 2 numbers with using of multiplication and division

#include <stdio.h>

void swapNumbers(int *a, int *b) {
    *a = *a * *b;  // Multiply a by b
    *b = *a / *b;  // Divide product by b to get original a
    *a = *a / *b;  // Divide product by new b to get original b
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

