#include<stdio.h>

int main() {
    char str[100];
    int alphabet = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabet++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else {
            special++;
        }
    }

    printf("Alphabets: %d\n", alphabet);
    printf("Digits: %d\n", digit);
    printf("Special characters: %d\n", special);

    return 0;
}
