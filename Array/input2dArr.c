#include<stdio.h>

int main() {

    int row, col, i, j;

    printf("Enter row and col value: ");
    scanf("%d %d", &row, &col);

    int numArr [row][col];

    for (i=0; i<row; i++) {
        printf("Enter %d numbers for %dth row: ", col, i+1);

        for (j=0; j<col; j++) {
            scanf("%d", &numArr[i][j]);
        }
        printf("\n");
    }

    // Iteration on 2D array
    printf("Your 2D array = { \n");

    for (i=0; i<row; i++) {
        printf("  { ");
        for (j=0; j<col-1; j++) {
            printf("%d, ", numArr[i][j]);
        }
        printf("%d ", numArr[i][j]);
        printf("}, \n");
    }

    printf("} \n");

    return 0;
}