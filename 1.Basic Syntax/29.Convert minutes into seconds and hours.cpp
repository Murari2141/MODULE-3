// 29.Convert minutes into seconds and hours

#include <stdio.h>

int main() {
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    
    int seconds = minutes * 60;
    printf("%d minutes is equal to %d seconds.\n", minutes, seconds);

    
    float hours = minutes / 60.0;
    printf("%d minutes is equal to %.2f hours.\n", minutes, hours);

    return 0;
}

