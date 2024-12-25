#include<stdio.h>
#include <math.h>

int main() {

    double a, b, c, s, area;

    printf("Enter 3 values: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area = %.2lf", area);

    return 0;
}