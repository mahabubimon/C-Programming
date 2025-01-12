#include<stdio.h>

int main() {

    int num, i, sum = 0;

    printf("Enter n th number: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        sum = sum + i * i;
    }

    printf("Sum of 1 to %d power series= %d", num, sum);

    return 0;
}