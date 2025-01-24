#include<stdio.h>

int main() {

    char str[100], ch;
    int capital, small, digit, word, other, i;

    printf("Enter a string: ");
    gets(str);

    i = capital = small = digit = word = other = 0;

    while ((ch=str[i]) != '\0') {

        if (ch>='A' && ch<='Z') {
            capital++;
        } else if (ch>='a' && ch<='z') {
            small++;
        } else if (ch>='0' && ch<='9') {
            digit++;
        } else if (ch==' ') {
            word++;
        } else other++;

        i++;
    }

    word++;

    printf("Case, digit and word of '%s':\n", str);
    printf("Numbers of capital letter= %d\n", capital);
    printf("Numbers of small letter= %d\n", small);
    printf("Numbers of digit= %d\n", digit);
    printf("Numbers of word= %d\n", word);
    printf("Numbers of others= %d\n", other);

    return 0;
}