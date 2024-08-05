#include <stdio.h>

int main() {
    int matrix1[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    
    int matrix2[3][2] = {
        {11,22},
        {33,44},
        {55,66}
    };
    
   
    
    
    
    int len_outer = sizeof(matrix1)/sizeof(matrix1[0]);
    int len_inner = sizeof(matrix1[0])/sizeof(matrix1[0][0]);
    
    
    
    printf("Matrix-1:\n");
    for(int row = 0; row<len_outer; row++){
        for(int col = 0; col<len_inner; col++){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    
    printf("Matrix-2:\n");
    for(int row = 0; row<len_outer; row++){
        for(int col = 0; col<len_inner; col++){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    
    printf("2D- Array Matrix Addition is:\n");
    for(int row = 0; row<len_outer; row++){
        for(int col = 0; col<len_inner; col++){
            printf("%d ", matrix1[row][col] + matrix2[row][col]);
        }
        printf("\n");
    }
    printf("2D- Array Matrix Subtraction is:\n");
    for(int row = 0; row<len_outer; row++){
        for(int col = 0; col<len_inner; col++){
            printf("%d ", matrix1[row][col] - matrix2[row][col]);
        }
        printf("\n");
    }
    
    printf("2D- Array Matrix Multiplication is:\n");
    for(int row = 0; row<len_outer; row++){
        for(int col = 0; col<len_inner; col++){
            printf("%d ", matrix1[row][col] * matrix2[row][col]);
        }
        printf("\n");
    }
    
    
    return 0;
}
