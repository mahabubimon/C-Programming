#include<stdio.h>
#include <math.h>

int main() {
    double num = 8.45, result;

    // Absolute value
    result = abs(num);
    printf("Absolute value of %.2lf is %.2lf.\n", num, result);

    // Square root
    result = sqrt(num);
    printf("Square root of %.2lf is %.2lf.\n", num, result);

    // Power Calculation
    result = pow(num, 2);
    printf("Power value of %.2lf^2 = %.2lf \n", num, result);

    // Logarithm value
    result = log(num);
    printf("Natural logarithm of %.2lf is %.2lf\n", num, result);

    result = log10(num);
    printf("Base 10 logarithm of %.2lf is %.2lf\n", num, result);

    // Exponential value
    result = exp(num);
    printf("Exponent e^%.2lf = %.2lf\n", num, result);

    // Sine value
    result = sin(num);
    printf("Sine value of %.2lf is %.2lf \n", num, result);

    // Cosine value
    result = cos(num);
    printf("Cosine value of %.2lf is %.2lf \n", num, result);

    // Tangent value
    result = tan(num);
    printf("Tangent value of %.2lf is %.2lf\n", num, result);

    // Round value
    result = round(num);
    printf("Round value of %.2lf is %.2lf\n", num, result);

    // Truncate value
    result = trunc(num);
    printf("Truncate value of %.2lf is %.2lf\n", num, result);

    // Ceil value
    result = ceil(num);
    printf("Ceiling value of %.2lf is %.2lf\n", num, result);

    // Floor value
    result = floor(num);
    printf("Floor value of %.2lf is %.2lf\n", num, result);

    return 0;
}