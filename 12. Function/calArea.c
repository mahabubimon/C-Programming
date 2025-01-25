#include<stdio.h>

void triangleArea(double b, double h) {
    double area = 0.5 * b * h;

    printf("Area of triangle: %.2lf\n", area);
}

int main() {
    
    double base, height;

    printf("Enter base and height: ");
    scanf("%lf %lf", &base, &height);

    triangleArea(base, height);

    return 0;
}