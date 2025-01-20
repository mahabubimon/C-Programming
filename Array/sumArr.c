#include<stdio.h>

int main() {

    int n, i, sum = 0, average;

    printf("Enter number of array indexes 'n' = ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);

    int num[n];

    for (i=0; i<n; i++) {
        scanf("%d", &num[i]);
    }

    for (i=0; i<n; i++) {
        sum = sum + num[i];
    }

    printf("\nSum = %d \n", sum);
    printf("Average = %.2lf \n", sum/(float)n);

    return 0;
}