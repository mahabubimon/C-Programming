#include<stdio.h>

int main() {
    // ASCII value of a number and character
    int decimal1, decimal2, octal1, octal2, hex1, hex2;
    char character;

    // ASCII character value of a number
    printf("Enter 1st decimal number: ");
    scanf("%d", &decimal1);
    printf("ASCII character value of %d = %c\n\n", decimal1, decimal1);

    // ASCII decimal value of a character
    printf("Enter any character: ");
    while (getchar() != '\n'); // Clear the input buffer
    character = getchar();
    printf("ASCII decimal value of %c = %d\n\n", character, character);

    // ASCII octal value of a decimal number
    printf("Enter 2nd decimal number: ");
    scanf("%d", &decimal2);
    printf("ASCII octal value of %d = %o\n\n", decimal2, decimal2);

    // ASCII decimal value of an octal number
    printf("Enter 1st octal number: ");
    scanf("%o", &octal1);
    printf("ASCII decimal value of %o = %d\n\n", octal1, octal1);

    /*
    // ASCII hexadecimal value of a decimal number
    printf("Enter 3rd decimal number: ");
    scanf("%d", &decimal3);
    printf("ASCII hexadecimal value of %d = %x\n\n", decimal3, decimal3);

    // ASCII decimal value of a hexadecimal number
    printf("Enter 1st hexadecimal number: ");
    scanf("%x", &hex1);
    printf("ASCII decimal value of %x = %d\n\n", hex1, hex1);
    */
   
    // ASCII hexadecimal value of a octal number
    printf("Enter 2nd octal number: ");
    scanf("%o", &octal2);
    printf("ASCII hexadecimal value of %o = %x\n\n", octal2, octal2);

    // ASCII octal value of a hexadecimal number
    printf("Enter 2nd hexadecimal number: ");
    scanf("%x", &hex2);
    printf("ASCII octal value of %x = %o\n", hex2, hex2);

    return 0;
}