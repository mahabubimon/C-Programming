#include<stdio.h>

int main() {

    // Ternary Operator
    int a = 10, b = 20, result;

    // Ternary Operator "? :"
    result = (a > b) ? a : b;
    printf("Largest number between %d and %d is %d\n", a, b, result);

    return 0;
}