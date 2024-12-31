#include<stdio.h>

int main() {
    // ASCII value of a number and character
    int decimal;
    char character;

    // ASCII character value of a number
    printf("Enter 1st decimal number: ");
    scanf("%d", &decimal);
    printf("ASCII character value of %d = %c\n\n", decimal, decimal);

    // ASCII decimal value of a character
    printf("Enter any character: ");
    while (getchar() != '\n'); // Clear the input buffer
    character = getchar();
    printf("ASCII decimal value of %c = %d\n", character, character);

    return 0;
}