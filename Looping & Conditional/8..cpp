#include <stdio.h>

int main() {
    int number, maxDigit = -1, digit;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    number = number < 0 ? -number : number;

    
    while (number > 0) {
        digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    
    printf("Max number is %d\n", maxDigit);

    return 0;
}

