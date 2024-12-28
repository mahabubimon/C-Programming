#include <stdio.h>

int main() {
    int a = 5;
    int b = -a; // Unary minus
    int c = 10;
    int d = 0;
    int *ptr = &a; // Address-of

    printf("Unary minus: -%d = %d\n", a, b);

    // Increment and Decrement
    printf("Original value of c: %d\n", c);
    printf("Post-increment: %d\n", c++); // Post-increment
    printf("After post-increment, c: %d\n", c);
    printf("Pre-increment: %d\n", ++c); // Pre-increment
    printf("After pre-increment, c: %d\n", c);

    printf("Original value of c: %d\n", c);
    printf("Post-decrement: %d\n", c--); // Post-decrement
    printf("After post-decrement, c: %d\n", c);
    printf("Pre-decrement: %d\n", --c); // Pre-decrement
    printf("After pre-decrement, c: %d\n", c);

    // Logical NOT
    printf("Logical NOT: !%d = %d\n", d, !d);

    // Bitwise NOT
    printf("Bitwise NOT: ~%d = %d\n", a, ~a);

    // Dereference
    printf("Dereference: *ptr = %d\n", *ptr);

    return 0;
}