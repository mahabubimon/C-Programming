#include<stdio.h>

int main() {

    int n, row, col;

    printf("Row = 6, Enter col value = ");
    scanf("%d", &n);

    printf("Rectangle of Row 6 and Column %d.\n", n);

    for (row=1; row<=6; row++) {
        for (col=1; col<=n; col++) {
            printf("%c ", 42);
        }

        printf("\n");
    }

    return 0;
}