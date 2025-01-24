#include<stdio.h>

int main() {

    int n, row, col;

    printf("Enter range of column 'n' = ");
    scanf("%d", &n);

    printf("\nArrow of Alphabet.\n");
    
    for (row=1; row<=n; row++) {
        for (col=1; col<=row; col++){
            printf("%c ", row+64);
        }
        printf("\n");
    }
    
    for (row=n-1; row>=1; row--) {
        for (col=1; col<=row; col++){
            printf("%c ", row+64);
        }
        printf("\n");
    }


    printf("\nArrow of Asterisk Sign.\n");

    for (row=1; row<=n; row++) {
        for (col=1; col<=row; col++){
            printf("%c ", 42);
        }
        printf("\n");
    }
    
    for (row=n-1; row>=1; row--) {
        for (col=1; col<=row; col++){
            printf("%c ", 42);
        }
        printf("\n");
    }

    return 0;
}