#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);
    
    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);
    
    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);

    
    int sum_of_angles = angle1 + angle2 + angle3;
      printf("Total of Sum of angle is = %d\n",sum_of_angles);
    
    if (sum_of_angles == 180 || sum_of_angles == 90 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("Triangle with angles %d, %d, and %d can be formed.\n", angle1, angle2, angle3);
    } 
	else {
        printf("Triangle with angles %d, %d, and %d cannot be formed.\n", angle1, angle2, angle3);
    }

    return 0;
}

