#include <stdio.h>

int main() {
    char names[5][50]; 
    int i;

    
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf(" %s", names[i]); 
    }

    
    printf("\nEntered names:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}

