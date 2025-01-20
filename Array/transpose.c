#include<stdio.h>

int main() {

    int row, col, i, j;

    printf("Enter row and col value: ");
    scanf("%d %d", &row, &col);

    int matrixA[row][col], matrixTRP[col][row];

    // Input matrixA elements
    printf("\nEnter MatrixA Elements:\n");

    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            printf("MatrixA[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }

    // Create transpose of matrix A
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            matrixTRP[j][i] = matrixA[i][j];
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

    // Output transpose matrix of matrixA
    printf("\nTranspose: ");

    for (i=0; i<col; i++) {
        for (j=0; j<row; j++) {
            printf("%d  ", matrixTRP[i][j]);
        }
        printf("\n\t   ");
    }

    return 0;
}