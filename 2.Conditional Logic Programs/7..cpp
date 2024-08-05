#include <stdio.h>

int main() {
    float marks;

    
    printf("Enter marks: ");
    scanf("%f", &marks);

    
    if (marks >= 35) {
        printf("Congratulations! You have passed.\n");
    } else 
	{
        printf("Sorry, you have failed.\n");
    }

    return 0;
}

