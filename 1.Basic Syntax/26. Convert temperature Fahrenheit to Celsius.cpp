// 26. Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    
    celsius = (fahrenheit - 32) * 5 / 9 ;  // Formula of convert Fahrenheit to celsius 

    
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
