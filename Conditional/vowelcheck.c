#include<stdio.h>

int main() {

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character %c is a vowel.\n", ch);
    } else {
        printf("The character %c is a consonant.\n", ch);
    }

    return 0;
}