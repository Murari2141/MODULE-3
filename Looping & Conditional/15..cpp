#include <stdio.h>

int main() {
    int count = 1;
    double number, sum = 0.0;

    printf("Enter 10 numbers:\n");

    
    while (count <= 10) {
        printf("Enter number %d: ", count);
        scanf("%lf", &number);

        
        sum += number;

        
        count++;
    }

    
    printf("Sum of the 10 numbers = %.2lf\n", sum);

    return 0;
}

