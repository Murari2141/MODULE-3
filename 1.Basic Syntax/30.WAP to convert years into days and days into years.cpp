// 30.WAP to convert years into days and days into years

#include <stdio.h>


int years_to_days(int years) {
    return years * 365;
}


float days_to_years(int days) {
    return (float)days / 365;
}

int main() {
    int choice;
    printf("Choose an option:\n");
    
    printf("1. Convert years to days\n2. Convert days to years");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int years;
            printf("Enter number of years: ");
            scanf("%d", &years);
            int days = years_to_days(years);
            printf("%d years = %d days\n", years, days);
            break;
        }
        case 2: {
            int days;
            printf("Enter number of days: ");
            scanf("%d", &days);
            float years = days_to_years(days);
            printf("%d days = %.2f years\n", days, years);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
 
