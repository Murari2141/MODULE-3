#include <stdio.h>

int main() {
    char students[5][50];
    
    printf("enter 5 students name:  ");
    for (int i=0; i<5; i++){
        printf("student %d:",i+1);
        scanf("%s",students[i]);
        }
     printf("stored students names:\n");
     for(int i=0; i<5; i++){
         printf("students %d:%s\n",i+1,students[i]);
     }
   

    return 0;
}
