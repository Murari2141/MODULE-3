#include <stdio.h>

int main() {
    int month;

    
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("Number of days in month %d is : 31 days.\n", month);
            break;
            
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("Number of days in month %d is : 30 days.\n", month);
            break;
            
        case 2:  // February
            printf("Number of days in month %d is : 28 or 29 days (leap year dependent).\n", month);
            break;
            
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

