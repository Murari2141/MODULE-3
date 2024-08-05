// 24. Accept 5 employees name and salary and count average and total salary

#include <stdio.h>
#define NUM_EMPLOYEES 5

int main() {
    char names[NUM_EMPLOYEES][50];  
    float salaries[NUM_EMPLOYEES];  
    float total_salary = 0, average_salary;
    int i;

    // Input names and salaries
    printf("Enter names and salaries of %d employees:\n", NUM_EMPLOYEES);
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", names[i]);  
        printf("Salary: ");
        scanf("%f", &salaries[i]);
        total_salary += salaries[i];
    }

    
    average_salary = total_salary / NUM_EMPLOYEES;

    
    printf("\nTotal salary: %.2f\n", total_salary);
    printf("Average salary: %.2f\n", average_salary);

    return 0;
}

