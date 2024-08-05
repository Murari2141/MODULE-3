#include<stdio.h>
#include<string.h>

int main() {
    char str[100], largest[100], smallest[100];
    int i, j, len, max_len = 0, min_len = 100;

    printf("Enter a string: ");
    scanf("%s", str);

    
    strcpy(smallest, str);

    
    char *word = strtok(str, " ");
    while (word != NULL) {
        len = strlen(word);
        if (len > max_len) {
            max_len = len;
            strcpy(largest, word);
        }
        if (len < min_len) {
            min_len = len;
            strcpy(smallest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}
