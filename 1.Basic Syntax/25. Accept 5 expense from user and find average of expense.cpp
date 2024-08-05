// 25. Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() {
    
    float expenses[5];
    float total = 0, average;
    int i;

    printf("Enter 5 expenses:\n");

    for (i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total += expenses[i];
    }

    
    average = total / 5;

    printf("Average of expenses = %.2f\n", average);

    return 0;
}

