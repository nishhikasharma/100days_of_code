#include <stdio.h>
int main() {
    int i, j, k;
    int rows = 4;

    for(i = 1; i <= rows; i++) {
        for(j = i; j < rows; j++) {
            printf(" ");
        }
      
        for(k = 1; k <= (2*i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    for(i = rows - 1; i >= 1; i--) {
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        
        for(k = 1; k <= (2*i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
