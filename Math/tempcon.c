#include<stdio.h>

int main() {

    float tempC, tempF;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &tempC);

    tempF = (tempC * 9/5) + 32;

    printf("Temperature in Fahrenheit = %.2f", tempF);

    return 0;
}