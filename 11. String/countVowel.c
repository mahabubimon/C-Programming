#include<stdio.h>

int main() {

    char str[100], ch;
    int vowel, consonant, digit, word, other, i;

    printf("Enter a string: ");
    gets(str);

    i = vowel = consonant = digit = word = other = 0;

    while ((ch=str[i]) != '\0') {

        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            vowel++;
        } else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            consonant++;
        } else if (ch>='0' && ch<='9') {
            digit++;
        } else if (ch==' ') {
            word++;
        } else other++;

        i++;
    }

    word++;

    printf("Count of char type and word:\n");
    printf("Numbers of vowel= %d\n", vowel);
    printf("Numbers of consonant= %d\n", consonant);
    printf("Numbers of digit= %d\n", digit);
    printf("Numbers of word= %d\n", word);
    printf("Numbers of others= %d\n", other);

    return 0;
}