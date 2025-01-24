#include<stdio.h>

int main() {

    // Calculator using switch case
    char operator;
    double num1, num2;

    printf("Enter an operator ('+', '-', '*', '/'): ");
    scanf("%c", &operator);

    // switch case to perform calculation
    switch (operator) {
        // Addition
        case '+': {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        }
        // Subtraction
        case '-': {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        }
        // Multiplication
        case '*': {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        }
        // Division
        case '/': {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } 
            break;
        }
        // Invalid operator
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}