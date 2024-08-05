#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number, sum = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    number = abs(number);

    
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    
    if (number < 0) {
        sum = -sum;
    }

    
    printf("Summation of digits is %d\n", sum);

    return 0;
}

