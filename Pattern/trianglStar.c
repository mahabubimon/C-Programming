#include<stdio.h>

int main() {

    int n, row, col;

    printf("Enter row 'n' = ");
    scanf("%d", &n);

    printf("\nTriangle pattern of Upper to Lower value. \n");

    for (row=n; row>=1; row--) {
        
        for(col=1; col<=row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    printf("\nTriangle pattern of star. \n");
    for (row=n; row>=1; row--) {
        
        for(col=1; col<=row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}