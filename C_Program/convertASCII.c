#include<stdio.h>

int main() {
    // ASCII value of a number and character
    int num;
    char character;

    // ASCII value of a number
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("ASCII value of %d = %c\n", num, num);

    // ASCII value of a character
    // printf("Enter any character: ");
    // character = getchar();
    character =  num;
    printf("ASCII value of %c = %d\n", character, character);

    return 0;
}