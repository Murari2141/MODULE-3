#include <stdio.h>

int main() {
	
    int n, totalSum = 0;

    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            sum += j; 
        }
        
        totalSum += sum; 
    }

    printf("The sum of the series is %d.\n", totalSum);

    return 0;
}
