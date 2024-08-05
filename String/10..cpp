#include<stdio.h>

int main() {
    char str[100], substr[100];
    int start, end, i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter start index: ");
    scanf("%d", &start);

    printf("Enter end index: ");
    scanf("%d", &end);

    
    for (i = start, j = 0; i <= end; i++, j++) {
        substr[j] = str[i];
    }
    substr[j] = '\0'; 

    printf("Substring: %s\n", substr);

    return 0;
}
