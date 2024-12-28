#include<stdio.h>

int main() {

    // Bitwise Operator
    int a = 10, b = 20, result;

    // Bitwise AND "&"
    result = a & b;
    printf("Bitwise AND between %d and %d is %d\n", a, b, result);

    // Bitwise OR "|"
    result = a | b;
    printf("Bitwise OR between %d and %d is %d\n", a, b, result);

    // Bitwise XOR "^"
    result = a ^ b;
    printf("Bitwise XOR between %d and %d is %d\n", a, b, result);

    // Bitwise NOT "~"
    result = ~a;
    printf("Bitwise NOT of %d is %d\n", a, result);

    // Bitwise Left Shift "<<"
    result = a << 2;
    printf("Left shift of %d by 2 is %d\n", a, result);

    // Bitwise Right Shift ">>"
    result = a >> 2;
    printf("Right shift of %d by 2 is %d\n", a, result);

    return 0;
}