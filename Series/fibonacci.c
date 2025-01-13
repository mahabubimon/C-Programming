#include<stdio.h>

int main() {

    int n, first = 0, second = 1, count = 0, fibonacci = 0, result = 0;

    printf("Enter fibonacci n = ");
    scanf("%d", &n);

    while (count<n) {

        if (count<=1) {
            fibonacci = count;
        } else {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
        }

        result = result + fibonacci;

        count != n - 1 ? printf("%d + ", fibonacci) : printf("%d = %d. \n", fibonacci, result);

        count++;
    }

    return 0;
}