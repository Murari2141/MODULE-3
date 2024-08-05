#include <stdio.h>
#include <ctype.h>  // For toupper() function

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    
    ch = toupper(ch);

    
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if (ch >= 'A' && ch <= 'Z') {
                printf("%c is a consonant.\n", ch);
            } 
			else {
                printf("%c is not a valid alphabet character.\n", ch);
            }
    }

    return 0;
}

