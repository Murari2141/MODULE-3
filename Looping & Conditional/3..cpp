#include <stdio.h>

int main() {
    int numbers[10];
    int i, evenCount = 0, oddCount = 0;
    int sumEven = 0, sumOdd = 0;

    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            sumEven += numbers[i];
        } else {
            oddCount++;
            sumOdd += numbers[i];
        }
    }

    
    printf("\nNumber of even numbers: %d\n", evenCount);
    
	printf("Number of odd numbers: %d\n", oddCount);
    
	printf("Sum of even numbers: %d\n", sumEven);
    
	printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}

