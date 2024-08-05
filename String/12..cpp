#include<stdio.h>
#include<string.h>

int main() {
    char str[100], word[] = "is";
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    char *ptr = strstr(str, word);
    while (ptr != NULL) {
        count++;
        ptr = strstr(ptr + 1, word);
    }

    printf("The word 'is' appears %d times\n", count);

    return 0;
}

