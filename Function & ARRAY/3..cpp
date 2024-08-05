#include <stdio.h>
#include <string.h>

void reverse_string(char *str, int length) {
    if (length == 0)
        return;

    reverse_string(str + 1, length - 1);

    printf("%c", str[0]);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reverse of the string: ");
    reverse_string(str, strlen(str));

    return 0;
}
