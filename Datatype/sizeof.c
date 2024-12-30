#include<stdio.h>

int main() {

    // Size of Data types in C
    int a = 10;
    short b = 20;
    long c = 30;
    long long d = 40;

    float e = 10.5;
    double f = 20.5;
    long double g = 30.5;

    char h = 'A';
    printf("Size of Data types in C: \n");

    printf("size of int: %d bytes.\n", sizeof(a));   
    printf("size of short: %d bytes.\n", sizeof(b));
    printf("size of long: %d bytes.\n", sizeof(c));
    printf("size of long long: %d bytes.\n", sizeof(d));
    printf("size of float: %d bytes.\n", sizeof(e));
    printf("size of double: %d bytes.\n", sizeof(f));
    printf("size of long double: %d bytes.\n", sizeof(g));
    printf("size of char: %d byte.\n", sizeof(h));

    return 0;
}