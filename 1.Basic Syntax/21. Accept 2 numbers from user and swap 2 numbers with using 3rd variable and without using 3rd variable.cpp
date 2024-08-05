// 21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    // Swapping using a third variable
//        temp = num1;
//        num1 = num2;
//	    num2 = temp;
    
     // Swapping without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;


    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);

    return 0;
}

