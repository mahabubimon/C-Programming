#include<stdio.h>

int main() {

    int row1, row2, col1, col2, i, j, k;

    while (col1 != row2) {
        printf("\nEnter 1st matrix row and col: ");
        scanf("%d %d", &row1, &col1);

        printf("Enter 2nd matrix row and col: ");
        scanf("%d %d", &row2, &col2);

        if (col1 != row2) {
            printf("\nError!!! Enter 1st matrix column == 2nd matrix rows.\n");
        }
    }
    
    int matrixA [row1][col1], matrixB [row2][col2], result [row1][col1];

    //Input Matrix A Elements
    printf("\nEnter Matrix A Elements:\n");

    for (i=0; i<row1; i++) {

        for (j=0; j<col1; j++) {
            printf("Enter Element Matrix A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }

    //Input Matrix B Elements
    printf("\nEnter Matrix B Elements:\n");

    for (i=0; i<row2; i++) {

        for (j=0; j<col2; j++) {
            printf("Enter Element Matrix B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
        printf("\n");
    }

    // // Sum and Sub of Matrix A and B.
    // for (i=0; i<row; i++) {

    //     for (j=0; j<col; j++) {
    //         sumAB[i][j] = matrixA[i][j] + matrixB[i][j];
    //         subAB[i][j] = matrixA[i][j] - matrixB[i][j];
    //     }
    // }

    //Output Matrix A Elements
    printf("\nMatrixA: ");

    for (i=0; i<row1; i++) {

        for (j=0; j<col1; j++) {
            printf("%d  ", matrixA[i][j]);
        }
        printf("\n\t ");
    }

    //Output Matrix B Elements
    printf("\nMatrixB: ");

    for (i=0; i<row2; i++) {

        for (j=0; j<col2; j++) {
            printf("%d  ", matrixB[i][j]);
        }
        printf("\n\t ");
    }


    // //Output Matrix A + B
    // printf("\nMatrix A + B =   ");
    // for (i=0; i<row; i++) {

    //     for (j=0; j<col; j++) {
    //         printf("%d  ", sumAB[i][j]);
    //     }
    //     printf("\n\t\t");
    // }

    // //Output Matrix A - B
    // printf("\nMatrix A - B =   ");
    // for (i=0; i<row; i++) {

    //     for (j=0; j<col; j++) {
    //         printf("%d  ", subAB[i][j]);
    //     }
    //     printf("\n\t\t");
    // }

    return 0;
}