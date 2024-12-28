#include<stdio.h>

int main() {
    // Area of a rectangle
    float length, width, area;
    printf("Enter the length and width: ");
    scanf("%f %f", &length, &width);

    // Formula: A = l * w
    area = length * width;
    
    printf("Area of the rectangle = %.2f", length * width);

    return 0;
}