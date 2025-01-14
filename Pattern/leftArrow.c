#include<stdio.h>

int main() {

    int n, row, col;

    printf("Enter range of column = ");
    scanf("%d", &n);

    for (row=1; row<=n; row++) {
        for(col=n; col>row; col--) {
            printf("  ");
        }

        for(col=row; col>=1; col--) {
            printf("* ");
        }

        printf("\n");
    }

    for (row=n-1; row>=1; row--) {
        for(col=n; col>row; col--) {
            printf("  ");
        }

        for(col=row; col>=1; col--) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}