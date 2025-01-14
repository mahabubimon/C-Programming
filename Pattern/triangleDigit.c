#include<stdio.h>

int main() {

    int n, row,col;

    printf("Enter row 'n' = ");
    scanf("%d", &n);

     printf("\nTriangle pattern of column value. \n");
    for (row=1; row<=n; row++) {
        
        for(col=1; col<=row; col++) {
            printf("%d ", col);
        }
        printf("\n");

    }

    printf("\nTriangle pattern of row value. \n");
    for (row=1; row<=n; row++) {
        
        for(col=1; col<=row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}