#include<stdio.h>

int main() {
    // Celsius to Fahrenheit
    float tempC1, tempF1, tempC2, tempF2;
    printf("Enter temp in Celsius: ");
    scanf("%f", &tempC1);
    
    // Formula: F = (C * 1.8) + 32
    tempF1 = (tempC1 * 1.8) + 32;

    printf("Temp in Fahrenheit = %.2f\n\n", tempF1);

    // Fahrenheit to Celsius
    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &tempF2);

    // Formula: C = (F - 32) / 1.8
    tempC2 = (tempF2 - 32) / 1.8;
    printf("Temp in Celsius = %.2f\n", tempC2);

    return 0;
}