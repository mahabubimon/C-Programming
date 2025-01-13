#include<stdio.h>

int main() {

    int n, first = 0, second = 1, count = 0, fib = 0, result = 0;

    printf("Enter fibonacci count 'n' = ");
    scanf("%d", &n);

    while (count<n) {

        if (count<=1) {
            fib = count;
        } else {
            fib = first + second;
            first = second;
            second = fib;
        }

        result = result + fib;

        count != n - 1 ? printf("%d + ", fib) : printf("%d = %d. \n", fib, result);

        count++;
    }

    return 0;
}