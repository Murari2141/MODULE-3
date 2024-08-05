// 31. Convert kilometers into meters

#include <stdio.h>

int main() {
    double kilometers, meters;

    
    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometers);

    
    meters = kilometers * 1000.0;

    printf("%.2f kilometers is equal to %.2f meters\n", kilometers, meters);

    return 0;
}

