#include<stdio.h>

int main() {

    float length, width, area;
    printf("Enter the length and width: ");
    scanf("%f %f", &length, &width);

    area = length * width;
    
    printf("Area of the rectangle = %.2f", length * width);

    return 0;
}