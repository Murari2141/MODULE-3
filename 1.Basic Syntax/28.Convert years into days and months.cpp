// 28.Convert years into days and months

#include <stdio.h>


int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; // Leap year
    else
        return 0; // Not a leap year
}

// Function to convert years to days and months
void convertYears(int years) {
    int days = 0;
    int months = 0;
    int year = 2024; // Starting year (you can change this as per your need)

    // Calculate days and months for each year
    for (int i = 0; i < years; ++i) {
        for (int month = 1; month <= 12; ++month) {
            switch (month) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    days += 31;
                    break;
                case 4: case 6: case 9: case 11:
                    days += 30;
                    break;
                case 2:
                    if (isLeapYear(year))
                        days += 29;
                    else
                        days += 28;
                    break;
            }
            months++;
        }
        year++;
    }

    
    printf("%d years is approximately %d months and %d days.\n", years, months, days);
}

int main() {
    int years;

    
    printf("Enter number of years: ");
    scanf("%d", &years);

    
    convertYears(years);

    return 0;
}

