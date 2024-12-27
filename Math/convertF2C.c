#include<stdio.h>

int main() {
    // Fahrenheit to Celsius
    float tempF, tempC;
    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &tempF);

    // Formula: C = (F - 32) / 1.8
    tempC = (tempF - 32) / 1.8;
    
    printf("Temp in Celsius = %.2f", tempC);


    return 0;
}