// 22.

#include <stdio.h>
#include <math.h>  

int main() {
    float principal, rate, time, compound_interest, amount;

    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period in years: ");
    scanf("%f", &time);

    // Calculate amount using the formula: A = P * (1 + R/100)^t
    amount = principal * pow(1 + rate / 100, time);

    // Calculate compound interest
    compound_interest = amount - principal;

    printf("Compound Interest after %.2f years: %.2f\n", time, compound_interest);

    return 0;
}

