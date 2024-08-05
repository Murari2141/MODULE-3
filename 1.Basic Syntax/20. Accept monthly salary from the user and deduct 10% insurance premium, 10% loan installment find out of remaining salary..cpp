// 20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include <stdio.h>

int main() {
    float salary, insurance, loan, remaining_salary;

    
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    // Calculate insurance premium (10%)
    insurance = 0.1 * salary;

    // Calculate loan installment (10%)
    loan = 0.1 * salary;

    // Calculate remaining salary after deductions
    remaining_salary = salary - insurance - loan;

    
    printf("\nSalary: $%.2f\n", salary);
    printf("Insurance premium (10%%): $%.2f\n", insurance);
    printf("Loan installment (10%%): $%.2f\n", loan);
    printf("Remaining salary: $%.2f\n", remaining_salary);

    return 0;
}

