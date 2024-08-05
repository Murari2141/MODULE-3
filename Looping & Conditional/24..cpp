#include <stdio.h>

int main() {
    int n, sum = 0;

    
    printf("Enter The Number: ");
    scanf("%d", &n);
    

    
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }

    
    printf("The sum of the  %d natural numbers is= %d.\n",n, sum);

    return 0;
}

