#include<stdio.h>

int main() {

    int matrixA[3][3], i, j, sum = 0;

    // Input matrixA elements
    printf("\nEnter matrixA Elements:\n");

    for (i=0; i<3; i++) {

        for (j=0; j<3; j++) {
            printf("matrixA[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }

    //Output matrixA elements
    printf("\nMatrixA: ");

    for (i=0; i<3; i++) {

        for (j=0; j<3; j++) {
            printf("%d  ", matrixA[i][j]);
        }
        printf("\n\t ");
    }

    // Sum of diagonal elements of matrixA
    printf("\nSum of diagonal elements of matrixA: ");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (i==j) {
                printf("%d ", matrixA[i][j]);
                sum = sum + matrixA[i][j];
            }
        }
    }

    printf(" = %d\n", sum);

    return 0;
}