#include<stdio.h>

int main() {
    // Sum, even and odd series 1 to n th item.
    int n, i, evenNum, oddNum, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        sum = sum + i;
    }

    printf("1 + 2 + 3 .... + %d = %d \n", n, sum);


    printf("Even numbers from 1 to %d: ", n);
    sum = 0;
    for (i=2; i<=n; i=i+2) {
        printf("%d  ", i);
        sum = sum + i;
    }
    printf("\nSum of even numbers = %d\n", sum);



    printf("\nOdd numbers from 1 to %d: ", n);
    sum = 0;
    for (i=1; i<=n; i=i+2) {
        printf("%d  ", i);
        sum = sum + i;
    }
    printf("\nSum of odd numbers = %d", sum);

    return 0;
}