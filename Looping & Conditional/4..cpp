#include <stdio.h>

int main() {
    int num, i, j;

    
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    
    for (i = 1; i <= num; i++) {
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Adding a newline after each table for clarity
    }

    return 0;
}

