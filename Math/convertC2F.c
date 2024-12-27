#include<stdio.h>

int main() {
    // Celsius to Fahrenheit
    float tempC, tempF;
    printf("Enter temp in Celsius: ");
    scanf("%f", &tempC);
    
    // Formula: F = (C * 1.8) + 32
    tempF = (tempC * 1.8) + 32;

    printf("Temp in Fahrenheit = %.2f", tempF);

    return 0;
}