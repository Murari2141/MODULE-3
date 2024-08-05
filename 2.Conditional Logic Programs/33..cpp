#include <stdio.h>

int main() {
    int week_number;

    
    printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    
    switch (week_number) {
        case 1:
            printf("Day of the week for week number %d is: Monday\n", week_number);
            break;
        case 2:
            printf("Day of the week for week number %d is: Tuesday\n", week_number);
            break;
        case 3:
            printf("Day of the week for week number %d is: Wednesday\n", week_number);
            break;
        case 4:
            printf("Day of the week for week number %d is: Thursday\n", week_number);
            break;
        case 5:
            printf("Day of the week for week number %d is: Friday\n", week_number);
            break;
        case 6:
            printf("Day of the week for week number %d is: Saturday\n", week_number);
            break;
        case 7:
            printf("Day of the week for week number %d is: Sunday\n", week_number);
            break;
        default:
            printf("Invalid week number entered. Please enter a number between 1 and 7.\n");
    }

    return 0;
}

