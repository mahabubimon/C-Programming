#include<stdio.h>

int main() {
    // ASCII value of a number and character
    int num;
    char character;

    // ASCII character value of a number
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("ASCII character value of %d = %c\n", num, num);

    // ASCII octal value of a number
    printf("ASCII octal value of %d = %o\n", num, num);

    // ASCII hexadecimal value of a number
    printf("ASCII hexadecimal value of %d = %x\n", num, num);


    // ASCII decimal value of a character
    // printf("Enter any character: ");
    // character = getchar();
    character =  num;
    printf("ASCII decimal value of %c = %d\n", character, character);

    return 0;
}