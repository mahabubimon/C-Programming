#include<stdio.h>

int main() {

    // Arithmetic operators
    int a = 15, b = 8;
    int sum, diff, prod, div, mod;

    printf("Numbers: a = %d, b = %d. \n", a, b);

    // Addition "+"
    sum = a + b;
    printf("Sum: %d + %d = %d\n", a, b, sum);

    // Subtraction "-"
    diff = a - b;
    printf("Difference: %d - %d = %d\n", a, b, diff);

    // Multiplication "*"
    prod = a * b;
    printf("Product: %d * %d = %d\n", a, b, prod);

    // Division "/"
    div = a / b;
    printf("Division: %d / %d = %d\n", a, b, div);

    // Modulus "%"
    mod = a % b;
    printf("Modulus of %d / %d = %d\n", a, b, mod);

    return 0;
}