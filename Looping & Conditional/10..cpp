#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number, firstDigit, lastDigit, sum;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    number = abs(number);

    
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    
    lastDigit = number % 10;

    
    sum = firstDigit + lastDigit;

    
    if (number < 0) {
        sum = -sum;
    }

    
    printf("Summation of first and last digits is %d\n", sum);

    return 0;
}

