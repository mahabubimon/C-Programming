#include<stdio.h>

int main() {

    int n, row, col;

    printf("Enter row count 'n' = ");
    scanf("%d", &n);

    printf("\nTriangle pattern of Upper Case.\n");
    for (row=1; row<=n; row++) {
        
        for(col=1; col<=row; col++) {
            printf("%c ", col+64);
        }
        printf("\n");

    }

    printf("\nTriangle pattern of Lower Case.\n");
    for (row=1; row<=n; row++) {
        
        for(col=1; col<=row; col++) {
            printf("%c ", row+96
            );
        }
        printf("\n");
    }

    return 0;
}