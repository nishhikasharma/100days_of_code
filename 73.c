Q73: Find the sum of each row of a matrix and store it in an array.

*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*

input:

#include <stdio.h>

int main() {
    int x[50][50] = {0};
    int sum[50];
    int col, row, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Display the matrix
    printf("\nMatrix is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }

    // Calculate sum of each row
    for (i = 0; i < row; i++) {
        int sum_ = 0;
        for (j = 0; j < col; j++) {
            sum_ += x[i][j];
        }
        sum[i] = sum_;
    }

    // Display sum of each row
    printf("\nSum of each row:\n");
    for (i = 0; i < row; i++) {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    // Calculate and display sum of each column
    printf("\nSum of each column:\n");
    for (j = 0; j < col; j++) {
        int col_sum = 0;
        for (i = 0; i < row; i++) {
            col_sum += x[i][j];
        }
        printf("Column %d = %d\n", j + 1, col_sum);
    }

    return 0;
}
