#include <stdio.h>

int main() {
    int physics, chemistry, mathematics, total_marks, total_maths_physics;

    
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &mathematics);

    printf("Enter total marks of Maths, Physics and Chemistry: ");
    scanf("%d", &total_marks);

    printf("Enter total marks of Maths and Physics: ");
    scanf("%d", &total_maths_physics);

    
    if ((physics >= 65 && chemistry >= 55 && mathematics >= 50 && total_marks >= 190) ||
        (total_maths_physics >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

