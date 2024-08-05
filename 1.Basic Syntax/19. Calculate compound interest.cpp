// 19. Calculate compound interest

#include <stdio.h>
#include<math.h>

int main() {
    double P, r, t, compound_interest;

    // Input P=principal amount, r=rate of interest, and time in years
    
    printf("Enter principal amount: ");
    scanf("%lf", &P);

    printf("Enter annual interest rate (as a decimal): ");
    scanf("%lf", &r);

    printf("Enter time in years: ");
    scanf("%lf", &t);

    // Calculate compound interest  A=P(1+(r/n))^n*t
    
    compound_interest = P * pow(1 + r, t);

    printf("Compound interest after %.2lf years = %.2lf\n", t, compound_interest);

    return 0;
}

