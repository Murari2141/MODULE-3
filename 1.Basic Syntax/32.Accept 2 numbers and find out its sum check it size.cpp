// 32. Accept 2 numbers and find out its sum check it size


#include <stdio.h>
#include <limits.h>

int main() {
    int num1, num2;
    long long sum; 

    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = (long long)num1 + num2; 

    
    printf("Sum: %lld\n", sum);

    printf("Size of sum: %zu bytes\n", sizeof(sum));

    return 0;
}
