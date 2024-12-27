#include<stdio.h>
#include <math.h>

int main() {

    // Square root
    double num, result;
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Formula: result = √num
    result = sqrt(num);

    printf("Square root of %.2lf is %.2lf.", num, result);

    return 0;
}