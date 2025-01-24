#include<stdio.h>

int main() {
    // Temperature Converter using switch case
    int choice;
    float temp;

    printf("Celsius to Fahrenheit: 1 \nFahrenheit to Celsius: 2\n");
    printf("Enter your temp converter choice 1 or 2: \n");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
        {
            // Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);

            // Formula: F = (C * 1.8) + 32
            temp = (temp * 1.8) + 32;
            printf("Temp in Fahrenheit = %.2f\n", temp);
            
            break;
        }

        case 2: 
        { 
            // Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);

            // Formula: C = (F - 32) / 1.8 
            temp = (temp - 32) / 1.8;
            printf("Temp in Fahrenheit = %.2f\n", temp);
            
            break;
        }
    
        default: printf("Invalid choice.\n");
        break;
    }

    return 0;
}