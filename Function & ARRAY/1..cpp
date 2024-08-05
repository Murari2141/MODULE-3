#include <stdio.h>

       int find_max(int num[],int size);
        
        
        int main(){
            
            int num[] = {23,32,65,26,56};
            int size = sizeof(num) / sizeof(num[0]);
            
            int max = find_max(num, size);
            
           printf("The maximum number in the Number is: %d\n", max);
           
        }
        
        int find_max(int num[], int size) {
                int max = num[0]; 

          for (int i = 1; i < size; i++) {
                  if (num[i] > max) {
                       max = num[i];
                         }
               }
   
            return max;
}
