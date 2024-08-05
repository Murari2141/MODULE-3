#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        
        double term = (double)i / (i + 1);
        
        
        if (i % 2 == 0) {
            sum -= term; 
        } else {
            sum += term; 
        }
    }
    
    printf("The sum of the series is: %.3f\n", sum);

    return 0;
}
