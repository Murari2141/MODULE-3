#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    
    ch = toupper(ch);

    
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}

