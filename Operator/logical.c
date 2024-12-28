#include<stdio.h>

int main() {

    // Logical operators
    int a = 1, b = 0, result;

    // Logical AND "&&"
    result = a && b;
    printf("Logical AND: %d && %d = %d\n", a, b, result);

    // Logical OR "||"  
    result = a || b;
    printf("Logical OR: %d || %d = %d\n", a, b, result);

    // Logical NOT "!"
    result = !a;
    printf("Logical NOT: !%d = %d\n", a, result);

    return 0;
}