#include<stdio.h>

int main() {
    char str[100];
    int max = 0, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    
    while (str[len] != '\0') {
        len++;
    }

    max = len;

    printf("Maximum number of characters: %d\n", max);

    return 0;
}

