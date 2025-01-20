#include<stdio.h>

int main() {

    int row, col, i, j;

    printf("Enter row and col value: ");
    scanf("%d %d", &row, &col);

    int matrixA[row][col], matrixB[row][col], sumAB[row][col], subAB[row][col];

    // Input matrixA elements
    printf("\nEnter matrixA Elements:\n");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("matrixA[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }

    // Input matrix elements
    printf("\nEnter matrixB elements:\n");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("matrixB[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
        printf("\n");
    }

    // Sum and Sub of Matrix A and B.
    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            sumAB[i][j] = matrixA[i][j] + matrixB[i][j];
            subAB[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    // Output Matrix A Elements
    printf("\nMatrixA: ");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", matrixA[i][j]);
        }
        printf("\n\t ");
    }

    // Output matrixB elements
    printf("\nMatrixB: ");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", matrixB[i][j]);
        }
        printf("\n\t ");
    }


    // Output Matrix A + B
    printf("\nMatrix A + B =  ");
    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", sumAB[i][j]);
        }
        printf("\n\t\t");
    }

    // Output Matrix A - B
    printf("\nMatrix A - B =  ");
    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", subAB[i][j]);
        }
        printf("\n\t\t");
    }

    return 0;
}