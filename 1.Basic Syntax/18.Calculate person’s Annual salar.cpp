// 18.Calculate person’s Annual salary

#include <stdio.h>

int main() {
    int monthlySalary, annualSalary;

    
    printf("Enter your monthly salary: ");
    scanf("%d", &monthlySalary);

    
    annualSalary = monthlySalary * 12;

    
    printf("Your annual salary is: %d\n", annualSalary);

    return 0;
}

