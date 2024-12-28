#include<stdio.h>

int main() {

    // Assignment operators
    int a = 15, b = 8;
    int sum, diff, prod, div, mod;
    
    printf("Numbers: a = %d, b = %d. \n", a, b);

    // Addition "+="
    sum = a;
    sum += b;
    printf("Sum: %d += %d = %d\n", a, b, sum);

    // Subtraction "-="
    diff = a;
    diff -= b;
    printf("Difference: %d -= %d = %d\n", a, b, diff);

    // Multiplication "*="
    prod = a;
    prod *= b;
    printf("Product: %d *= %d = %d\n", a, b, prod);

    // Division "/="
    div = a;
    div /= b;
    printf("Division: %d /= %d = %d\n", a, b, div);

    // Modulus "%="
    mod = a;
    mod %= b;
    printf("Modulus of %d /= %d = %d\n", a, b, mod);

    return 0;
}