#include <stdio.h>

int main() {
    int choice, num1, num2;

    printf("\n1. Addition,\n2.Subtraction,\n3.Multiplication,\n4.Division\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Result: %d / %d = %f\n", num1, num2, (float)num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}