#include<stdio.h>

int main() {

    int matrixA[3][3], i, j, upperSum = 0, lowerSum = 0;

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

    // Sum of upper and lower triangle elements of matrixA
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (i<j) {
                upperSum = upperSum + matrixA[i][j];
            }

            if (i>j) {
                lowerSum = lowerSum + matrixA[i][j];
            }
        }
    }

    printf("\nSum of upper triangle elements = %d\n", upperSum);
    printf("Sum of lower triangle elements = %d\n", lowerSum);

    return 0;
}