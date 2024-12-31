#include<stdio.h>
#include<ctype.h>

int main() {
    // Convert lowercase and uppercase character
    char character, lowercase, uppercase;
    printf("Enter any character: ");
    character = getchar();

    printf("ASCII decimal value of %c = %d\n\n", character, character);

    uppercase = character - 32; // toupper(character);
    lowercase = character + 32; //tolower(character);

    if (character >= 'a' && character <= 'z') {
        printf("Uppercase character of %c = %c\n", character, uppercase);
    }else if (character >= 'A' && character <= 'Z') {
        printf("Lowercase character of %c = %c\n", character, lowercase);}
    else {
        printf("%c is Invalid character.\n", character);
    }

    return 0;
}