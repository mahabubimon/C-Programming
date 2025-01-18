#include<stdio.h>

int main() {

    int row, col, i, j;

    printf("Enter row and col value: ");
    scanf("%d %d", &row, &col);

    int matrixA [row][col], matrixB [row][col], sumAB [row][col], subAB [row][col];

    //Input Matrix A Elements
    printf("\nEnter Matrix A Elements:\n");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("Enter Element Matrix A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }

    //Input Matrix B Elements
    printf("\nEnter Matrix B Elements:\n");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("Enter Element Matrix B[%d][%d]: ", i, j);
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

    //Output Matrix A Elements
    printf("\nMatrixA: ");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", matrixA[i][j]);
        }
        printf("\n\t ");
    }

    //Output Matrix B Elements
    printf("\nMatrixB: ");

    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", matrixB[i][j]);
        }
        printf("\n\t ");
    }


    //Output Matrix A + B
    printf("\nMatrix A + B =   ");
    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", sumAB[i][j]);
        }
        printf("\n\t\t");
    }

    //Output Matrix A - B
    printf("\nMatrix A - B =   ");
    for (i=0; i<row; i++) {

        for (j=0; j<col; j++) {
            printf("%d  ", subAB[i][j]);
        }
        printf("\n\t\t");
    }

    return 0;
}