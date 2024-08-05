#include <stdio.h>

int main() {
    char operators ;
    float num1, num2, result;

    
    printf("Enter an operators (+, -, *, /, %%): ");
    scanf(" %c", &operators);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    
    switch(operators) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;  
                printf("%.2f %% %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Modulus by zero!\n");
            }
            break;
            
        default:
        	
            printf("Error: Invalid operators!\n");
    }

    return 0;
}

