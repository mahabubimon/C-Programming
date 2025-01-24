#include<stdio.h>

int main() {
    // Factorial of a number
    while (1) {
        int i, num;
        int factorial = 1;

        printf("\nEnter a positive number: ");
        scanf("%d", &num);

        for ( i = 1; i <= num; i++) {
        factorial *= i;
        }
     
        printf("Factorial of %d: %d\n", num, factorial);
    }

    return 0;
}