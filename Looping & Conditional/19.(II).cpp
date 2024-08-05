
#include <stdio.h>

int  main(){
    
    int num = 5;
    
    int g_var = 1;
    
    for(int row = 1; row <= num; row += 1){
        for(int col = 1; col <= row; col += 1){
            printf("%c ", g_var+64);
            g_var++;
        }
        printf("\n");
    }
}
