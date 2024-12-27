#include<stdio.h>

int main() {
    // Area of a circle
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    // Formula: A = πr^2
    area = 3.1416 * radius * radius;

    printf("Area of the circle = %.2f", area);

    return 0;
}