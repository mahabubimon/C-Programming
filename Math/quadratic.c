#include<stdio.h>
#include<math.h>

int main() {
    // Quadratic equation
    double a, b, c, d, x1, x2;
    printf("Enter a, b, c: ");  
    scanf("%lf %lf %lf", &a, &b, &c);

    // Formula: d = b^2 - 4ac
    d = sqrt(b*b - 4*a*c);

    // Formula: x1 = (-b + d) / 2a
    x1 = (-b + d) / (2*a);
    // Formula: x2 = (-b - d) / 2a
    x2 = (-b - d) / (2*a);

    printf("Roots of the equation are x1 = %.2lf and x2 = %.2lf", x1, x2);

    return 0;
}