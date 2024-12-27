#include<stdio.h>
#include <math.h>

int main() {
    // Area of a triangle
    double a, b, c, s, area;

    printf("Enter 3 bars value of triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    // Formula: s = (a + b + c)/2
    s = (a + b + c)/2;
    
    // Formula: Area = √(s(s-a)(s-b)(s-c))
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of your triangle = %.2lf", area);

    return 0;
}