#include <stdio.h>

int main() {
    int number, originalNumber, remainder, reversedNumber = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    
    printf("Original number: %d\n", originalNumber);
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

