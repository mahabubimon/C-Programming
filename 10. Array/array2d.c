#include<stdio.h>

int main() {
    // Declaration 2D array: datatype variableName = {{Valuation}}
    int i, j, numArr[4][5] = { 
        {2, 4, 6, 8, 10}, 
        {1, 3, 5, 7, 9}, 
        {3, 7, 11, 15, 19}, 
        {2, 12, 30, 56, 90}
    };

    // Iteration on 2D array
    printf("2D array = { \n");

    for (i=0; i<4; i++) {
        printf("  { ");
        for (j=0;j<4; j++) {
            printf("%d, ", numArr[i][j]);
        }
        printf("}, \n");
        printf("%d ", numArr[i][j]);
    }

    printf("} \n");

    return 0;
}