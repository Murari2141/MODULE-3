#include <stdio.h>

int main() {
    int n;
    
    
    printf("Enter the number : ");
    scanf("%d", &n);
    
    int a = 1, b = 2, c = 3;  

    
    printf("%d %d %d ", a, b, c);

    
    for (int i = 4; i <= n; i++) {
        int nextTerm;
        
        
        if (i % 2 == 0) {
            nextTerm = c * 2;
        } else {
            nextTerm = c * 3;
        }
        
        a = b;
        b = c;
        c = nextTerm;

       
        printf("%d ", nextTerm);
    }

    printf("\n");

    return 0;
}
