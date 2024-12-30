#include<stdio.h>

int main() {

    char character;

    printf("Enter any character: ");

    // Read a character from the user
    character = getchar();

    printf("You entered: ");

    // Print the character
    putchar(character);

    return 0;
}