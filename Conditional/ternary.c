#include<stdio.h>

int main() {

    // Ternary Operator
    int a = 10, b = 20, max;

    // Find the maximum of two numbers using ternary operator
    max = (a > b) ? a : b;

    printf("Maximum of %d and %d is %d.\n", a, b, max);

    return 0;
}